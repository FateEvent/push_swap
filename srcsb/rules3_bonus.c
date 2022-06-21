/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules3_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:08:41 by faventur          #+#    #+#             */
/*   Updated: 2022/06/21 18:14:38 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rra_bonus(t_stack *stack_a)
{
	ft_rev_rotate(stack_a);
}

void	rrb_bonus(t_stack *stack_b)
{
	ft_rev_rotate(stack_b);
}

void	rrr_bonus(t_stack *stack_a, t_stack *stack_b)
{
	ft_rev_rotate(stack_a);
	ft_rev_rotate(stack_b);
}
