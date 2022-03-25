/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:06:32 by faventur          #+#    #+#             */
/*   Updated: 2022/03/25 13:35:56 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_lstdelone() function frees the memory of the element passed
** as a parameter with the del function and free(3). The memory of
** next mustn-t be freed.
*/

#include "struct.h"

void	ft_stackdelone(t_stack *stack, void (*del)(void *))
{
	if (!stack || !del)
		return ;
	del(stack->content);
	free(stack);
}
