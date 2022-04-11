/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:41:02 by faventur          #+#    #+#             */
/*   Updated: 2022/04/11 14:56:00 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

void	radix_sort(t_stack *stack1, t_stack *stack2, int size)
{
	t_node	*current;
	int		i;
	int		j;
	int		max;
	int		max_bits;

	current = stack1->top;
	i = 0;
	j = 0;
	max = size - 1;
	max_bits = 0;
	while ((max >> max_bits) != 0)
		++max_bits;
	while (i < max_bits)
	{
		while (j < size)
		{
			if ((current->index >> i) & 1 == 1)
			{
				ft_rotate(stack1);
				ft_printf("ra\n");
			}
			else
			{
				ft_push(stack1, stack2);
				ft_printf("pb\n");
			}
			++j;
		}
		++i;
	}
}
