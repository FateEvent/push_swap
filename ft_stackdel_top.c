/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackdel_top.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 22:38:22 by faventur          #+#    #+#             */
/*   Updated: 2022/04/09 12:08:16 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_stackdel_top() function frees the memory of the element on top
** of the stack passed as a parameter with free(3).
*/

#include "stacks.h"

void	ft_stackdel_top(t_stack **stack)
{
	t_stack	*current;

	if (stack)
	{
		if (*stack)
		{
			current = ft_stacklast(*stack);
			free(current);
			ft_printf("last: %d\n", current->content);
		}
	}
}
