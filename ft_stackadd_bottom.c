/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_bottom.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:19:24 by faventur          #+#    #+#             */
/*   Updated: 2022/04/09 18:23:14 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_stackadd_bottom() function adds the new element at the bottom of
** the stack passed as a parameter.
*/

#include "stacks.h"

void	ft_stackadd_bottom(t_node **stack, t_node *new)
{
	t_node	*current;

	if (stack)
	{
		if (*stack)
		{
			current = ft_stacklast(*stack);
			current->next = new;
			new->prev = current;
		}
		else
			(*stack) = new;
	}
}
