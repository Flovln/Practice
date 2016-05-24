/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 15:12:46 by fviolin           #+#    #+#             */
/*   Updated: 2016/05/24 15:36:26 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heap.h"

int main()
{
	t_heap *heap;
	heap = create_heap();

	push_node(heap, 12);
	push_node(heap, 11);
	push_node(heap, 14);
	push_node(heap, 8);
	push_node(heap, 13);
	push_node(heap, 7);
	push_node(heap, 18);
	push_node(heap, 6);
	push_node(heap, 1);
	push_node(heap, 10);
	push_node(heap, 3);    

	printf("Value removed : %d\n", pop_node(heap));
	printf("Value removed : %d\n", pop_node(heap));
	printf("Value removed : %d\n", pop_node(heap));
	printf("Value removed : %d\n", pop_node(heap));
	printf("Value removed : %d\n", pop_node(heap));
	printf("Value removed : %d\n", pop_node(heap));
	printf("Value removed : %d\n", pop_node(heap));
	printf("Value removed : %d\n", pop_node(heap));
	printf("Value removed : %d\n", pop_node(heap));
	printf("Value removed : %d\n", pop_node(heap));
	printf("Value removed : %d\n", pop_node(heap));

	free_heap(heap);

	return 0;
}
