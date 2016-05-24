/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 14:52:54 by fviolin           #+#    #+#             */
/*   Updated: 2016/05/24 15:36:56 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heap.h"

t_heap		*create_heap(void)
{
	t_heap *new;

	if (!(new = (t_heap *)malloc(sizeof(t_heap))))
		return (NULL);
	if (!(new->tab = (int *)malloc(sizeof(int) * 32)))
		return (NULL);
	new->capacity = 32;
	new->size = 0;
	return (new);
}
/*
void		heap_realloc(t_heap *heap)
{
	int new_size;

	new_size = 2 * heap->capacity;
	if (!(heap->tab = realloc(heap->tab, new_size * sizeof(int))))
		return ;
//	if (!(heap->tab = (int *)malloc(sizeof(int) * 5)))
//		return ;
	heap->capacity = new_size;
}
*/
void		reorganize_heap(t_heap *heap)
{
	int tmp;
	int	size;
	int	i;

	size = heap->size;
	i = size / 2;
	while (heap->tab[i] < heap->tab[size] && size > 1)
	{
		tmp = heap->tab[size];
		heap->tab[size] = heap->tab[i];
		heap->tab[i] = tmp;
		i = i / 2;
		size = size / 2;
	}
}

void		push_node(t_heap *heap, int value)
{
//	if (heap->size >= heap->capacity)
//		heap_realloc(heap);
	heap->size++;
	heap->tab[heap->size] = value;
	reorganize_heap(heap);
}

int			pop_node(t_heap *heap)
{
	int tmp;
	int i_up;
	int i_down;
	int value;

	i_up = 1;
	i_down = 2;
	if (heap->size == 0)
		return (-1);
	value = heap->tab[1];
	heap->tab[1] = heap->tab[heap->size];
	heap->size--;
	while (i_down <= heap->size)
	{
		if (i_down + 1 <= heap->size && heap->tab[i_down] < heap->tab[i_down + 1])
			i_down++;
		if (heap->tab[i_down] > heap->tab[i_up])
		{
			tmp = heap->tab[i_down];
			heap->tab[i_down] = heap->tab[i_up];
			heap->tab[i_up] = tmp;
		}
		i_up = i_down;
		i_down = i_down * 2;
	}
	return (value);
}

void		free_heap(t_heap *heap)
{
	free(heap->tab);
	free(heap);
}
