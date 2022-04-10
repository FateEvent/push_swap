/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackdisplay.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 22:50:05 by faventur          #+#    #+#             */
/*   Updated: 2022/04/10 16:03:43 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_stackdisplay() function displays the content of every element of
** the stack passed as a parameter.
*/

#include "stacks.h"

void	ft_stackdisplay(t_stack *stack)
{
	t_node	*current;

	if (stack != NULL)
	{
		current = stack->top;
		while (current != NULL)
		{
			ft_putnbr(current->content);
			ft_putchar('\n');
			current = current->next;
		}
	}
	ft_putendl("NULL");
}
