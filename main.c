/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:16:16 by faventur          #+#    #+#             */
/*   Updated: 2022/04/12 22:29:23 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		size;
	int		max;
	int		min;

	ft_check_args(argc, argv);
	stack_a = ft_stacknew();
	stack_b = ft_stacknew();
	ft_stack_init(argc, argv, stack_a);
	ft_assign_index(stack_a);
	max = find_max(stack_a);
	min = find_min(stack_a);
	size = ft_stacksize(stack_a);

	if (!ft_issorted(stack_a))
	{
		if (stack_a->length == 2)
			sort_two(stack_a);
		else if (stack_a->length == 3)
			sort_three(stack_a, max, min);
		else if (stack_a->length == 4)
			sort_four(stack_a, stack_b);
		else if (stack_a->length > 4)
			radix_sort(stack_a, stack_b, size);
	}
	ft_stackdisplay(stack_a);
}
