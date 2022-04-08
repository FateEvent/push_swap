/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacklast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:52:37 by faventur          #+#    #+#             */
/*   Updated: 2022/04/08 22:42:55 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_stacklast() function returns the last element of the stack passed
** as a parameter.
*/
#include "stacks.h"

t_stack	*ft_stacklast(t_stack *stack)
{
	t_stack	*current;

	if (stack)
	{
		current = stack;
		while (current->next != NULL)
			current = current->next;
		return (current);
	}
	return (NULL);
}
