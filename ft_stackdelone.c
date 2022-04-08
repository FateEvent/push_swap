/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:01:03 by faventur          #+#    #+#             */
/*   Updated: 2022/04/09 00:09:57 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_stackdelone() function frees the memory of the element passed
** as a parameter with free(3).
*/

#include "stacks.h"

void	ft_stackdelone(t_stack *stack, void (*del)(int))
{
	if (!stack)
		return ;
	del(stack->content);
	del(stack->index);
	free(stack);
	ft_printf("del: %d\n", stack->content);
}
