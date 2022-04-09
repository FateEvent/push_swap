/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackdel_bottom.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:06:32 by faventur          #+#    #+#             */
/*   Updated: 2022/04/09 12:07:48 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_stackdel_bottom() function frees the memory of the element at the
** bottom of the stack passed as a parameter with free(3).
*/

#include "stacks.h"

void	ft_stackdel_bottom(t_stack **stack)
{
	if (stack)
	{
		if (*stack)
		{
			free(stack);
			ft_printf("del_b: %d\n", (*stack)->content);
		}
	}
}
