/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:08:41 by faventur          #+#    #+#             */
/*   Updated: 2022/04/15 14:00:46 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/stacks.h"

void	rra(t_stack *stack_a)
{
	ft_rev_rotate(stack_a);
	ft_putendl("rra");
}

void	rrb(t_stack *stack_b)
{
	ft_rev_rotate(stack_b);
	ft_putendl("rrb");
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	ft_rev_rotate(stack_a);
	ft_rev_rotate(stack_b);
	ft_putendl("rrr");
}
