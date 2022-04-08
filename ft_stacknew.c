/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacknew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:16:43 by faventur          #+#    #+#             */
/*   Updated: 2022/04/08 18:06:43 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_stacknew() function allocates (with malloc(3)) and returns a
** new "fresh" element. The "content" member variable is initialised to
** the value of the "content" parameter. The "next" variable is
** set to NULL.
*/

#include "stacks.h"

t_stack	*ft_stacknew(int content)
{
	t_stack	*stack;

	stack = malloc(sizeof(*stack));
	if (stack == NULL)
		return (NULL);
	stack->content = content;
	stack->next = NULL;
	return (stack);
}
