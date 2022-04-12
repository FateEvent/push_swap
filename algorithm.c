/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:41:02 by faventur          #+#    #+#             */
/*   Updated: 2022/04/12 12:39:15 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

void	sort_three(t_stack *stack1, int min, int last_but_one)
{
	if (stack1->top->index == min
		&& stack1->top->next->index == last_but_one)
	{
		sa(stack1);
		rra(stack1);
	}
	else if (stack1->top->index == min
		&& stack1->top->next->index != last_but_one)
		ra(stack1);
	else if (stack1->top->index == last_but_one
		&& stack1->top->next->index != min)
		sa(stack1);
	else if (stack1->top->index != last_but_one
		&& stack1->top->next->index == min)
	{
		sa(stack1);
		ra(stack1);
	}
	else
		rra(stack1);
}

void	sort_five(t_stack *stack1, t_stack *stack2)
{
	int	size;
	int	min;
	int	last_but_one;

	pb(stack1, stack2);
	pb(stack1, stack2);
	size = ft_stacksize(stack1);
	min = size - 1;
	last_but_one = size - 2;
	ft_assign_index(stack1);
	sort_three(stack1, min, last_but_one);
	pa(stack1, stack2);



}

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
