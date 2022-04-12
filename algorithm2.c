/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 22:08:20 by faventur          #+#    #+#             */
/*   Updated: 2022/04/12 22:25:08 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"
/*
static void	sort_five_part2(stack1, stack2, max, min)
{

}
*/
/*
void	sort_five(t_stack *stack1, t_stack *stack2)
{
	int	min;
	int	max;

	pb(stack1, stack2);
	if (!ft_issorted(stack1))
		sort_four(stack1, stack2);



	pa(stack2, stack1);
	if (!ft_issorted(stack1))
	{
		min = find_min(stack1);
		max = find_max(stack1);
		sort_five_part2(stack1, stack2, max, min);
	}
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
/*
void	sorting_algo(t_stack *stack1, t_stack stack2)
{
	if (!ft_issorted(stack_a))
	{
		if (stack_a->length == 2)
			sort_two(stack_a);
		else if (stack_a->length == 3)
			sort_three(stack_a, max, min);
		else if (stack_a->length == 4)
			sort_four(stack_a, stack_b);
		else if (stack_a->length > 4)
			radix_sort(stack_a, stack_b, size);
	}
}
*/