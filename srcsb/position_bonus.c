/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:32:15 by faventur          #+#    #+#             */
/*   Updated: 2022/04/15 14:03:38 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

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

int	find_next_min(t_stack *stack)
{
	t_node	*current;
	int		max;
	int		next_min;

	current = stack->top;
	max = find_max(stack);
	next_min = current->index;
	while (current->next != NULL)
	{
		if (current->next->index > next_min
			&& current->next->index < max)
			next_min = current->next->index;
		current = current->next;
	}
	return (next_min);
}
