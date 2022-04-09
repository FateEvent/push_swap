/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacklast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:52:37 by faventur          #+#    #+#             */
/*   Updated: 2022/04/09 18:22:00 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_stacklast() function returns the last element of the stack passed
** as a parameter.
*/

#include "stacks.h"

t_node	*ft_stacklast(t_node *stack)
{
	t_node	*current;

	if (stack)
	{
		current = stack;
		while (current->next != NULL)
			current = current->next;
		return (current);
	}
	return (NULL);
}
