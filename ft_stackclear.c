/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 09:53:37 by faventur          #+#    #+#             */
/*   Updated: 2022/04/08 14:11:27 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_stackclear() function suppresses and frees the memory of the
** the element passed as a parameter and of all the following elements
** by using the del function and free(3). Finally, the initial pointer
** is to be set to NULL.
*/

#include "stacks.h"

void	ft_stackclear(t_stack **stack, void (*del)(void *))
{
	t_stack	*temp;

	if (!stack || !del)
		return ;
	while (*stack)
	{
		temp = (*stack)->next;
		ft_lstdelone(*stack, del);
		*stack = temp;
	}
}
