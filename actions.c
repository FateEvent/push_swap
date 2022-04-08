/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:41:32 by faventur          #+#    #+#             */
/*   Updated: 2022/04/08 21:57:56 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

void	ft_push_to_stack_b(t_stack **stack_a, t_stack **stack_b)
{
	ft_stackadd_top(stack_b, *stack_a);
	ft_stackdelone(*stack_a);
}
