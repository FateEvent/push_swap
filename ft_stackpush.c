/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:19:24 by faventur          #+#    #+#             */
/*   Updated: 2022/04/09 18:18:37 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_stackpush() function creates a new element and adds it on top
** of the stack passed as a parameter.
*/

#include "stacks.h"

void	ft_stackpush(t_node **stack, int n)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(*new));
	if (stack == NULL || new == NULL)
		return ;
	new->content = n;
	new->next = (*stack)->next;
	new->prev = NULL;
	(*stack)->next->prev = new;
	*stack = new;
}
