/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:41:02 by faventur          #+#    #+#             */
/*   Updated: 2022/04/13 18:56:29 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

void	sort_two(t_stack *stack)
{
	if (stack->top->index > stack->top->next->index)
		sa(stack);
}

void	sort_three(t_stack *stack, int max, int min)
{
	if (stack->top->index == max
		&& stack->top->next->index != min)
	{
		sa(stack);
		rra(stack);
	}
	else if (stack->top->index == max
		&& stack->top->next->index == min)
		ra(stack);
	else if (stack->top->index != max
		&& stack->top->next->index == min)
		sa(stack);
	else if (stack->top->index == min
		&& stack->top->next->index == max)
	{
		sa(stack);
		ra(stack);
	}
	else if (stack->top->index != min
		&& stack->top->next->index == max)
		rra(stack);
}
/*
static void	sort_four_part2(t_stack *stack1, t_stack *stack2, int max, int min)
{
	int	median;

	median = find_next_min(stack1);
	if (stack2->top->index > max)
	{
		pa(stack2, stack1);
		ra(stack1);
	}
	else if (stack2->top->index > median && stack2->top->index < max)
	{
		ra(stack1);
		pa(stack2, stack1);
		sa(stack1);
		rra(stack1);
	}
	else if (stack2->top->index < median && stack2->top->index > min)
	{
		ra(stack1);
		pa(stack2, stack1);
		rra(stack1);
	}
	else if (stack2->top->index < min)
		pa(stack2, stack1);
}

void	sort_four(t_stack *stack1, t_stack *stack2)
{
	int	min;
	int	max;

	pb(stack1, stack2);
	min = find_min(stack1);
	max = find_max(stack1);
	if (!ft_issorted(stack1))
		sort_three(stack1, max, min);
	sort_four_part2(stack1, stack2, max, min);
}
*/

static int	sort_four_get_min(t_stack *stack1)
{
	int		min;
	int		counter;
	int		i;
	int		j;

	min = find_min(stack1);
	i = 0;
	j = 0;
	while (stack1->top->index != min && ++i)
		ft_rotate(stack1);
	counter = i;
	while (counter--)
		ft_rev_rotate(stack1);
	while (stack1->top->index != min && ++j)
		ft_rev_rotate(stack1);
	counter = j;
	while (counter--)
		ft_rotate(stack1);
	return (i - j);
}

void	sort_four(t_stack *stack1, t_stack *stack2)
{
	int		min;
	int		max;
	int		i;

	min = find_min(stack1);
	i = sort_four_get_min(stack1) < 0;
	while (stack1->top->index != min)
	{
		if (i < 0)
			ra(stack1);
		else
			rra(stack1);
	}
	pb(stack1, stack2);
	min = find_min(stack1);
	max = find_max(stack1);
	if (!ft_issorted(stack1))
		sort_three(stack1, max, min);
	pa(stack2, stack1);
}
