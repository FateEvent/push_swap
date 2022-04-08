/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackdisplay.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 22:50:05 by faventur          #+#    #+#             */
/*   Updated: 2022/04/08 23:04:57 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_stackdisplay() function shows the content of every element of the
** stack passed as a parameter.
*/

#include "stacks.h"

static void	ft_putnbr_endl(int n)
{
	ft_putnbr(n);
	ft_putchar('\n');
}

void	ft_stackdisplay(t_stack *stack)
{
	ft_stackiter(stack, ft_putnbr_endl);
}
