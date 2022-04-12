/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:16:16 by faventur          #+#    #+#             */
/*   Updated: 2022/04/12 11:04:50 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		size;

	ft_check_args(argc, argv);
	stack_a = ft_stacknew();
	stack_b = ft_stacknew();
	ft_stack_init(argc, argv, stack_a);
	ft_assign_index(stack_a);
	size = ft_stacksize(stack_a);
	radix_sort(stack_a, stack_b, size);
//	ft_stackdisplay(stack_a);
}
