/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ft_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:19:24 by faventur          #+#    #+#             */
/*   Updated: 2022/06/21 18:14:38 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_stackadd_bottom() function adds the new element at the bottom of
** the stack passed as a parameter.
*/

#include "checker.h"

t_stack	*ft_stacknew(void)
{
	t_stack	*new;

	new = malloc(sizeof(*new));
	if (new != NULL)
	{
		new->length = 0;
		new->top = NULL;
		new->bottom = NULL;
	}
	return (new);
}

t_node	*ft_newnode(int content)
{
	t_node	*stack;

	stack = malloc(sizeof(*stack));
	if (stack == NULL)
		return (NULL);
	stack->content = content;
	stack->prev = NULL;
	stack->next = NULL;
	return (stack);
}

t_stack	*ft_stackadd_bottom(t_stack *stack, t_node *new)
{
	if (stack != NULL && new != NULL)
	{
		if (stack->bottom == NULL)
		{
			new->prev = NULL;
			stack->top = new;
			stack->bottom = new;
		}
		else
		{
			stack->bottom->next = new;
			new->prev = stack->bottom;
			stack->bottom = new;
		}
		stack->length++;
	}
	return (stack);
}
