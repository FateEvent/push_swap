/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_top.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:52:37 by faventur          #+#    #+#             */
/*   Updated: 2022/04/09 18:22:41 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_stackadd_top() function adds the new element on top of the stack
** passed as a parameter.
*/

#include "stacks.h"

void	ft_stackadd_top(t_node **stack, t_node *new)
{
	ft_printf("add what\n");
	if (new == NULL)
		return ;
	new->prev = NULL;
	if (stack != NULL)
	{
		new->next = stack[0]->next;
		write(1, "boucle\n", 7);
		new->next->prev = new;
	}
	else
		new->next = NULL;
	write(1, "outboucle\n", 10);
	*stack = new;
	ft_printf("add %d\n", (*stack)->content);
}
