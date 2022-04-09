/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:05:18 by faventur          #+#    #+#             */
/*   Updated: 2022/04/09 18:22:57 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_stackiter() function iterates in the stack passed as a parameter
** and applies the f function to the content of every element.
*/

#include "stacks.h"

void	ft_stackiter(t_node *stack, void (*f)(int))
{
	if (!stack || !f)
		return ;
	while (stack != NULL)
	{
		f(stack->content);
		stack = stack->next;
	}
}
