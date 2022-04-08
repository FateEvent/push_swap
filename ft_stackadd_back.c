/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:52:37 by faventur          #+#    #+#             */
/*   Updated: 2022/04/08 16:30:18 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_stackadd_back() function adds the new element at the end of
** the stack passed as a parameter.
*/

#include "stacks.h"

void	ft_stackadd_back(t_stack **stack, t_stack *new)
{
	t_stack	*current;

	if (stack)
	{
		if (*stack)
		{
			current = ft_stacklast(*stack);
			current->next = new;
		}
		else
			(*stack) = new;
	}
}
