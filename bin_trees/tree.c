/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 11:34:48 by fviolin           #+#    #+#             */
/*   Updated: 2016/05/24 12:19:11 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"

void	add_node(t_tree **root, int key)
{
	t_tree *cur;
	t_tree *tmp;
	t_tree *new;

	tmp = *root;
	if (!(new = (t_tree *)malloc(sizeof(t_tree))))
			return ;
	new->key = key;
	new->left = NULL;
	new->right = NULL;
	if (tmp)
	{
		while (tmp)
		{
			cur = tmp;
			if (key > tmp->key)
			{
				tmp = tmp->right;
				if (!tmp)
					cur->right = new;
			}
			else
			{
				tmp = tmp->left;
				if (!tmp)
					cur->left = new;
			}
		}
	}
	else
		*root = new;
}

int		search_node(t_tree *node, int key)
{
	while (node)
	{
		if (key == node->key)
			return (1);
		if (key > node->key)
			node = node->right;
		else
			node = node->left;
	}
	return (0);
}

void	print_tree(t_tree *node)
{
	if (!node)
		return ;
	if (node->left)
		print_tree(node->left);
	printf("Key = |%d|\n", node->key);
	if (node->right)
		print_tree(node->right);
}

/* new function printing tree, starting on the right */

void	print_reverse_tree(t_tree *node)
{
	if (!node)
		return ;
	if (node->right)
		print_reverse_tree(node->right);
	printf("Key = |%d|\n", node->key);
	if (node->left)
		print_reverse_tree(node->left);
}

void	free_tree(t_tree **root)
{
	t_tree *cur;

	cur = *root;
	if (!root)
		return ;
	if (cur->left)
		free_tree(&cur->left);
	if (cur->right)
		free_tree(&cur->right);
	free(cur);
	*root = NULL;
}
