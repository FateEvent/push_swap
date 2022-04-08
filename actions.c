/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:41:32 by faventur          #+#    #+#             */
/*   Updated: 2022/04/08 22:25:58 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

void	ft_push_to_stack_b(t_stack **stack_a, t_stack **stack_b)
{
	ft_stackadd_top(stack_b, *stack_a);
	ft_stackdel_top(stack_a);
}

void	ft_push_to_stack_a(t_stack **stack_a, t_stack **stack_b)
{
	ft_stackadd_top(stack_a, *stack_b);
	ft_stackdel_top(stack_b);
}
