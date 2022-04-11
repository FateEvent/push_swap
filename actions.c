/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:41:32 by faventur          #+#    #+#             */
/*   Updated: 2022/04/11 12:16:14 by faventur         ###   ########.fr       */
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

void	ft_push(t_stack *stack1, t_stack *stack2)
{
	if (stack1 != NULL && stack2 != NULL && ft_stacksize(stack1) > 0)
	{
		if (stack2->top == NULL)
		{
			stack2->top = stack1->top;
			stack1->top = stack1->top->next;
			stack1->top->prev = NULL;
			stack2->top->next = NULL;
			stack2->top->prev = NULL;
			ft_printf("a1 %d, a2 %d, b1 %d\n", stack1->top->content, stack1->top->next->content, stack2->top->content);
		}
		/*
		else if (stack2->top == NULL)
		{
			stack2->top = stack1->top;
			stack1->top = stack1->top->next;
			stack1->top->prev = NULL;
			stack2->top->next = NULL;
			stack2->top->prev = NULL;
			ft_printf("a1 %d, a2 %d, b1 %d\n", stack1->top->content, stack1->top->next->content, stack2->top->content);
		}
		*/
		else if (ft_stacksize(stack1) >= 2 && ft_stacksize(stack2) >= 1)
		{
			stack2->top->prev = stack1->top;
			stack1->top = stack1->top->next;
			stack2->top = stack2->top->prev;
			stack2->top->prev = NULL;
			stack1->top->prev = NULL;

			stack2->top->next = stack2->top->next->next;
			ft_printf("a1 %d, a2 %d, b1 %d, b2 %d\n", stack1->top->content, stack1->top->next->content, stack2->top->content, stack2->top->next->content);
			/*
			stack1->top->next->next = stack->top->next;
			stack->top->next = stack->top->prev;

			stack1->top->prev = NULL;
			
			stack->top->next->prev = stack->top;
			stack->top->next->next->prev = stack->top->next;
			*/
		}
	}
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
		ft_printf("%d, %d, %d\n", stack->top->content, stack->top->next->content, stack->top->next->next->content);
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
		ft_printf("%d, %d, %d\n", stack->top->content, stack->top->next->content, stack->top->next->next->content);
	}
}
