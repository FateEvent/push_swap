/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:54:00 by faventur          #+#    #+#             */
/*   Updated: 2022/04/14 16:42:54 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

void	sa_bonus(t_stack *stack_a)
{
	ft_swap(stack_a);
}

void	sb_bonus(t_stack *stack_b)
{
	ft_swap(stack_b);
}

void	ss_bonus(t_stack *stack_a, t_stack *stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
}

void	pa_bonus(t_stack *stack_b, t_stack *stack_a)
{
	ft_push(stack_b, stack_a);
}

void	pb_bonus(t_stack *stack_a, t_stack *stack_b)
{
	ft_push(stack_a, stack_b);
}
