/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_manipulation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:34:54 by faventur          #+#    #+#             */
/*   Updated: 2022/04/09 18:39:12 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

t_stack	*stack_new(void)
{
	t_stack	*new;

	new = malloc(sizeof(*new));
	if (new != NULL)
	{
		new->length = 0;
		new->top = NULL;
		new->bottom = NULL;
	}
	return (new);
}
