/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:41:32 by faventur          #+#    #+#             */
/*   Updated: 2022/04/12 17:37:37 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

void	ft_swap(t_stack *stack)
{
	if (stack != NULL && ft_stacksize(stack) > 1)
	{
		stack->bottom = stack->top;
		stack->top = stack->top->next;
		stack->bottom->prev = stack->top;
		stack->top->next = stack->bottom;
		stack->bottom->next = NULL;
		stack->top->prev = NULL;
	}
	else if (stack != NULL && ft_stacksize(stack) > 2)
	{
		stack->top = stack->top->next;
		stack->top->prev->next = stack->top->next;
		stack->top->next = stack->top->prev;
		stack->top->prev = NULL;
		stack->top->next->prev = stack->top;
		stack->top->next->next->prev = stack->top->next;
	}
}

static void	ft_push_part2(t_stack *stack1, t_stack *stack2)
{
	if (ft_stacksize(stack1) == 1 && stack2->top == NULL)
	{
		stack2->top = stack1->top;
		stack1->top = NULL;
	}
	else
	{
		stack2->top->prev = stack1->top;
		stack2->top->prev->next = stack2->top;
		stack2->top = stack1->top;
		stack1->top = NULL;
	}
}

void	ft_push(t_stack *stack1, t_stack *stack2)
{
	if (stack1 != NULL && stack2 != NULL && ft_stacksize(stack1) > 0)
	{
		if (ft_stacksize(stack1) >= 2 && stack2->top == NULL)
		{
			stack2->top = stack1->top;
			stack1->top = stack1->top->next;
			stack1->top->prev = NULL;
			stack2->top->next = NULL;
			stack2->top->prev = NULL;
		}
		else if (ft_stacksize(stack1) >= 2 && ft_stacksize(stack2) >= 1)
		{
			stack1->top = stack1->top->next;
			stack2->top->prev = stack1->top->prev;
			stack2->top->prev->next = stack2->top;
			stack2->top = stack2->top->prev;
			stack2->top->prev = NULL;
			stack1->top->prev = NULL;
		}
		else if (ft_stacksize(stack1))
			ft_push_part2(stack1, stack2);
	}
	stack1->length--;
	stack1->length++;
}

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

void	ft_rev_rotate(t_stack *stack)
{
	if (stack != NULL && ft_stacksize(stack) > 1)
	{
		stack->top->prev = stack->bottom;
		stack->bottom->next = stack->top;
		stack->top = stack->bottom;
		stack->bottom = stack->bottom->prev;
		stack->bottom->next = NULL;
	}
}
