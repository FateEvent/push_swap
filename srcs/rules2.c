/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:08:55 by faventur          #+#    #+#             */
/*   Updated: 2022/04/18 17:09:51 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

void	ra(t_stack *stack_a)
{
	ft_rotate(stack_a);
	ft_putendl("ra");
}

void	rb(t_stack *stack_b)
{
	ft_rotate(stack_b);
	ft_putendl("rb");
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	ft_putendl("rr");
}
