/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:44:34 by faventur          #+#    #+#             */
/*   Updated: 2022/04/08 14:13:02 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_stackmap() function iterates in the stack passed as a parameter
** and applies the f function to the content of every element of the
** stack. It creates a new stack resulting from the successive
** applications of f. The del function is present in order to destroy
** an element if necessary.
*/

#include "stacks.h"

t_stack	*ft_stackmap(t_stack *stack, void *(*f)(void *), void (*del)(void *))
{
	t_stack	*new_stack;
	t_stack	*temp;

	new_stack = NULL;
	temp = NULL;
	if (!stack || !f || !del)
		return (NULL);
	while (stack)
	{
		temp = ft_stacknew(f(stack->content));
		if (temp == NULL)
		{
			ft_stackclear(&temp, del);
			break ;
		}
		ft_stackadd_back(&new_stack, temp);
		stack = stack->next;
	}
	ft_stackclear(&stack, del);
	return (new_stack);
}
