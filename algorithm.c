/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:41:02 by faventur          #+#    #+#             */
/*   Updated: 2022/04/12 17:39:13 by faventur         ###   ########.fr       */
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
	else
		rra(stack);
}
/*
void	sort_four(t_stack *stack1, t_stack *stack2, int max, int min)
{
	t_node	*current;
	int		min;

	current = stack2->top;
	pb(stack1, stack2);
	min = find_min(stack1);
	sort_three(stack1);
	if (current->index > max)
	{
		pa(stack2, stack1);
		ra(stack1);
	}
	if (current->index > median)
	{
		ra(stack1);
		pa(stack2, stack1);
		sa(stack1);
		rra(stack1);
	}
	if (current->index > min && current->index < median)
	{
		ra(stack1);
		pa(stack2, stack1);
		sa(stack1);
		rra(stack1);
	}




	int		min;
	int		i;

	min = find_min(stack1);
	i = 0;
	while (i < ft_stacksize(stack1))
	{
		if (stack1->top->index == min)
			pb(stack1, stack2);
		else if (stack1->bottom->index == min)
		{
			rra(stack1);
			pb(stack1, stack2);
		}
		else
			ra(stack1);
		i++;
	}
	sort_three(stack1);
	pa(stack1, stack2);
	
}

void	sort_five(t_stack *stack1, t_stack *stack2)
{
	int	size;
	int	max;
	int	last_but_one;

	pb(stack1, stack2);
	pb(stack1, stack2);
	size = ft_stacksize(stack1);
	max = size - 1;
	last_but_one = size - 2;
	ft_assign_index(stack1);
	sort_three(stack1, max, last_but_one);
	pa(stack1, stack2);



}
*/
void	radix_sort(t_stack *stack1, t_stack *stack2, int size)
{
	int		i;
	int		j;
	int		max;
	int		max_bits;

	i = 0;
	max = size - 1;
	max_bits = 0;
	while ((max >> max_bits) != 0)
		++max_bits;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if (((stack1->top->index >> i) & 1) == 1)
				ra(stack1);
			else
				pb(stack1, stack2);
			++j;
		}
		while (ft_stacksize(stack2) != 0)
			pa(stack2, stack1);
		++i;
	}
}
