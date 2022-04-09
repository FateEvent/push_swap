/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:41:32 by faventur          #+#    #+#             */
/*   Updated: 2022/04/09 18:21:06 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

void	swap_a(t_node **stack_a)
{
	if (ft_stacksize(*stack_a) > 1)
		ft_stackadd_top(stack_a, (*stack_a)->next);
}

void	swap_b(t_node **stack_b)
{
	if (ft_stacksize(*stack_b) > 1)
		ft_stackadd_top(stack_b, (*stack_b)->next);
}

void	double_swap(t_node **stack_a, t_node **stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
}

void	push_a(t_node **stack_b, t_node **stack_a)
{
	if (ft_stacksize(*stack_b))
		ft_stackadd_top(stack_a, *stack_b);
}

void	push_b(t_node **stack_a, t_node **stack_b)
{
	if (ft_stacksize(*stack_a))
		ft_stackadd_top(stack_b, *stack_a);
}

void	rotate_a(t_node **stack_a)
{
	if (ft_stacksize(*stack_a) > 1)
		ft_stackadd_bottom(stack_a, *stack_a);
}

void	rotate_b(t_node **stack_b)
{
	if (ft_stacksize(*stack_b) > 1)
		ft_stackadd_bottom(stack_b, *stack_b);
}

void	double_rotate(t_node **stack_a, t_node **stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
}

void	rev_rotate_a(t_node **stack_a)
{
	if (ft_stacksize(*stack_a) > 1)
		ft_stackadd_top(stack_a, ft_stacklast(*stack_a));
}

void	rev_rotate_b(t_node **stack_b)
{
	if (ft_stacksize(*stack_b) > 1)
		ft_stackadd_top(stack_b, ft_stacklast(*stack_b));
}

void	double_rev_rotate(t_node **stack_a, t_node **stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
}
