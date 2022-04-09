/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_top.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:52:37 by faventur          #+#    #+#             */
/*   Updated: 2022/04/09 21:43:21 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_stackadd_top() function adds the new element on top of the stack
** passed as a parameter.
*/

#include "stacks.h"

t_stack	*ft_stackadd_top(t_stack *stack, int content)
{
	t_node	*new;

	if (stack != NULL)
	{
		new = malloc(sizeof(*new));
		if (new != NULL)
		{
			new->content = content;
			new->prev = NULL;
			if (stack->bottom == NULL)
			{
				new->next = NULL;
				stack->top = new;
				stack->bottom = new;
			}
			else
			{
				stack->top->prev = new;
				new->next = stack->top;
				stack->top = new;
			}
			stack->length++;
		}
	}
	return (stack);
}
