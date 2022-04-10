/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:41:32 by faventur          #+#    #+#             */
/*   Updated: 2022/04/10 22:28:47 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

void	ft_swap(t_stack *stack)
{
	if (stack != NULL && ft_stacksize(stack) > 1)
	{
		stack->top->next->prev = NULL;
		stack->top->prev = stack->top->next;
		stack->top->next->next->prev = stack->top;
		stack->top->next->next = stack->top;
		stack->top = stack->top->next;
	}
}

void	ft_push(t_stack *stack1, t_stack *stack2)
{
	if (ft_stacksize(stack1))
		ft_stackadd_top(stack1, stack2->top);
}

void	ft_rotate(t_stack *stack)
{
	if (ft_stacksize(stack) > 1)
		ft_stackadd_bottom(stack, stack->top);
}

void	ft_rev_rotate(t_stack *stack)
{
	if (ft_stacksize(stack) > 1)
		ft_stackadd_top(stack, stack->bottom);
}
