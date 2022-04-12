/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:32:15 by faventur          #+#    #+#             */
/*   Updated: 2022/04/12 17:20:22 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

int	find_max(t_stack *stack)
{
	t_node	*current;
	int		max;

	current = stack->top;
	max = current->index;
	while (current->next != NULL)
	{
		if (current->next->index > max)
			max = current->next->index;
		current = current->next;
	}
	return (max);
}

int	find_min(t_stack *stack)
{
	t_node	*current;
	int		min;

	current = stack->top;
	min = current->index;
	while (current->next != NULL)
	{
		if (current->next->index < min)
			min = current->next->index;
		current = current->next;
	}
	return (min);
}

/*
void	sorting_algo(t_stack *stack1, t_stack stack2)
{
	if (stack_a->length == 2 && !ft_issorted(stack_a))
		sort_two(stack_a);
	if (stack_a->length == 3 && !ft_issorted(stack_a))
		sort_three(stack_a, max, min);
//	if (ft_stacksize(stack_a) == 4 && !ft_issorted(stack_a))
//		sort_four(stack_a, stack_b);
	else if (stack_a->length > 3 && !ft_issorted(stack_a))
		radix_sort(stack_a, stack_b, size);
	ft_stackdisplay(stack_a);
	
}
*/