/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_top.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:52:37 by faventur          #+#    #+#             */
/*   Updated: 2022/04/09 14:39:32 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_stackadd_top() function adds the new element at the top of
** the stack passed as a parameter.
*/

#include "stacks.h"

void	ft_stackadd_top(t_stack **stack, t_stack *new)
{
	if (new == NULL)
		return ;
	new->prev = *stack;
	new->next = (*stack)->next;
	*stack = new;
}
