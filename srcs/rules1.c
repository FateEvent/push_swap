/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:54:00 by faventur          #+#    #+#             */
/*   Updated: 2022/04/15 14:00:38 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/stacks.h"

void	sa(t_stack *stack_a)
{
	ft_swap(stack_a);
	ft_putendl("sa");
}

void	sb(t_stack *stack_b)
{
	ft_swap(stack_b);
	ft_putendl("sb");
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	ft_putendl("ss");
}

void	pa(t_stack *stack_b, t_stack *stack_a)
{
	ft_push(stack_b, stack_a);
	ft_putendl("pa");
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	ft_push(stack_a, stack_b);
	ft_putendl("pb");
}
