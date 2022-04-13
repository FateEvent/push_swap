/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 22:08:20 by faventur          #+#    #+#             */
/*   Updated: 2022/04/13 18:57:02 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

static int	sort_five_get_min(t_stack *stack1)
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

void	sort_five(t_stack *stack1, t_stack *stack2)
{
	int		min;
	int		i;

	min = find_min(stack1);
	i = sort_five_get_min(stack1) < 0;
	while (stack1->top->index != min)
	{
		if (i < 0)
			ra(stack1);
		else
			rra(stack1);
	}
	pb(stack1, stack2);
	if (!ft_issorted(stack1))
		sort_four(stack1, stack2);
	pa(stack2, stack1);
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

void	sorting_algo(t_stack *stack1, t_stack *stack2)
{
	int	min;
	int	max;
	int	size;

	min = find_min(stack1);
	max = find_max(stack1);
	size = stack1->length;
	if (!ft_issorted(stack1))
	{
		if (stack1->length == 2)
			sort_two(stack1);
		else if (stack1->length == 3)
			sort_three(stack1, max, min);
		else if (stack1->length == 4)
			sort_four(stack1, stack2);
		else if (stack1->length == 5)
			sort_five(stack1, stack2);
		else
			radix_sort(stack1, stack2, size);
	}
}
