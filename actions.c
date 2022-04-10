/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:41:32 by faventur          #+#    #+#             */
/*   Updated: 2022/04/10 18:43:20 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

void	swap_a(t_stack *stack_a)
{
	if (ft_stacksize(stack_a) > 1)
		ft_stackadd_top(stack_a, stack_a->top->next);
}

void	swap_b(t_stack *stack_b)
{
	if (ft_stacksize(stack_b) > 1)
		ft_stackadd_top(stack_b, stack_b->top->next);
}

void	double_swap(t_stack *stack_a, t_stack *stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
}

void	push_a(t_stack *stack_b, t_stack *stack_a)
{
	if (ft_stacksize(stack_b))
		ft_stackadd_top(stack_a, stack_b->top);
}

void	push_b(t_stack *stack_a, t_stack *stack_b)
{
	if (ft_stacksize(stack_a))
		ft_stackadd_top(stack_b, stack_a->top);
}

void	rotate_a(t_stack *stack_a)
{
	if (ft_stacksize(stack_a) > 1)
		ft_stackadd_bottom(stack_a, stack_a->top);
}

void	rotate_b(t_stack *stack_b)
{
	if (ft_stacksize(stack_b) > 1)
		ft_stackadd_bottom(stack_b, stack_b->top);
}

void	double_rotate(t_stack *stack_a, t_stack *stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
}

void	rev_rotate_a(t_stack *stack_a)
{
	if (ft_stacksize(stack_a) > 1)
		ft_stackadd_top(stack_a, stack_a->bottom);
}

void	rev_rotate_b(t_stack *stack_b)
{
	if (ft_stacksize(stack_b) > 1)
		ft_stackadd_top(stack_b, stack_b->bottom);
}

void	double_rev_rotate(t_stack *stack_a, t_stack *stack_b)
{
	rev_rotate_a(stack_a);
	rev_rotate_b(stack_b);
}
