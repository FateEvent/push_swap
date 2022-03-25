/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:05:18 by faventur          #+#    #+#             */
/*   Updated: 2022/03/25 13:09:22 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_stackiter() function iterates in the stack passed as a parameter
** and applies the f function to the content of every element.
*/

#include "struct.h"

void	ft_stackiter(t_stack *stack, void (*f)(int))
{
	if (!stack || !f)
		return ;
	while (stack != NULL)
	{
		f(stack->content);
		stack = stack->next;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			write(1, "-", 1);
		}
		if (nb >= 10)
		{
			ft_putnbr_fd(nb / 10);
			ft_putnbr_fd(nb % 10);
		}
		else
			ft_putchar_fd(nb + '0');
	}
}
