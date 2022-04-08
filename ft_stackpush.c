/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:19:24 by faventur          #+#    #+#             */
/*   Updated: 2022/04/08 14:05:16 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_stackpush() function adds the new element at the head of
** the stack passed as a parameter.
*/

#include "stacks.h"

void	ft_stackpush(t_stack **stack, int n)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(*new));
	if (stack == NULL || new == NULL)
		return ;
	new->content = n;
	new->next = *stack;
	*stack = new;
}
