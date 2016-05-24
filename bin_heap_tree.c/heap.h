/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 14:47:18 by fviolin           #+#    #+#             */
/*   Updated: 2016/05/24 15:15:46 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAP_H
# define HEAP_H
#include <stdio.h>
#include <stdlib.h>

typedef struct		s_heap
{
	int 			capacity;
	int				size;
	int				*tab;
}					t_heap;

t_heap				*create_heap(void);
void				push_node(t_heap *node, int value);
int					pop_node(t_heap *node);
void				free_heap(t_heap *heap);

#endif
