/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacksize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:13:51 by faventur          #+#    #+#             */
/*   Updated: 2022/04/08 14:11:11 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_stacksize() function counts the number of elements of the stack
** passed as a parameter.
*/

#include "stacks.h"

int	ft_stacksize(t_stack *stack)
{
	int		counter;

	counter = 0;
	if (stack == NULL)
		return (0);
	while (stack != NULL)
	{
		counter++;
		stack = stack->next;
	}
	return (counter);
}
