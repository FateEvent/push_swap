/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:41:32 by faventur          #+#    #+#             */
/*   Updated: 2022/04/10 23:53:27 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

void	ft_swap(t_stack *stack)
{
	if (stack != NULL && ft_stacksize(stack) > 1)
	{
		stack->top = stack->top->next;
		stack->top->prev->next = stack->top->next;
		stack->top->next = stack->top->prev;
		stack->top->prev = NULL;
		stack->top->next->prev = stack->top;
		stack->top->next->next->prev = stack->top->next;
	}
}
/*
void	ft_push(t_stack *stack1, t_stack *stack2)
{
	if (ft_stacksize(stack1))
		ft_stackadd_top(stack1, stack2->top);
}
*/
void	ft_rotate(t_stack *stack)
{
	if (stack != NULL && ft_stacksize(stack) > 1)
	{
		stack->top->prev = stack->bottom;
		stack->bottom->next = stack->top;
		stack->bottom = stack->top;
		stack->top = stack->top->next;
		stack->bottom->next = NULL;
	}
}
/*
void	ft_rev_rotate(t_stack *stack)
{
	if (ft_stacksize(stack) > 1)
		ft_stackadd_top(stack, stack->bottom);
}
*/