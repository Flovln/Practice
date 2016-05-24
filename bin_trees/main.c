/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 12:12:41 by fviolin           #+#    #+#             */
/*   Updated: 2016/05/24 12:22:35 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"

int		main()
{
	int 	key;
	t_tree 	*tree;

	tree = NULL;
	add_node(&tree, 30);
	add_node(&tree, 92);
	add_node(&tree, 50);
	add_node(&tree, 70);
	add_node(&tree, 60);
	add_node(&tree, 31);
	add_node(&tree, 20);
	add_node(&tree, 19);
	add_node(&tree, 46);
	add_node(&tree, 23);
	add_node(&tree, 58);
	add_node(&tree, 15);
	add_node(&tree, 10);

	printf("-------------------------------\n");
	print_tree(tree);
	printf("-------------------------------\n");
	print_reverse_tree(tree);
	printf("-------------------------------\n");

	key = 58;
	if (search_node(tree, key))
		printf("Key |%d| exists\n", key);
	else
		printf("Key |%d| doesn't exist\n", key);

	key = 46;
	if (search_node(tree, key))
		printf("Key |%d| exists\n", key);
	else
		printf("Key |%d| doesn't exist\n", key);

	printf("-------------------------------\n");

	free_tree(&tree);
	return (0);
}
