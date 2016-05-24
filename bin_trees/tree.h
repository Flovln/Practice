/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 11:33:06 by fviolin           #+#    #+#             */
/*   Updated: 2016/05/24 12:24:14 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TREE_H
# define TREE_H
#include <stdio.h>
#include <stdlib.h>

typedef struct		s_tree
{
	int 			key;
	struct s_tree	*left;
	struct s_tree	*right;
}					t_tree;

void		free_tree(t_tree **root);
void		print_reverse_tree(t_tree *node);
void		print_tree(t_tree *node);
int			search_node(t_tree *node, int key);
void		add_node(t_tree **root, int key);

#endif
