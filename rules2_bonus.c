/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:08:55 by faventur          #+#    #+#             */
/*   Updated: 2022/04/14 21:43:52 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

void	ra_bonus(t_stack *stack_a)
{
	ft_rotate(stack_a);
}

void	rb_bonus(t_stack *stack_b)
{
	ft_rotate(stack_b);
}

void	rr_bonus(t_stack *stack_a, t_stack *stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
}
