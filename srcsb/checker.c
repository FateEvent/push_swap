/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:45:42 by faventur          #+#    #+#             */
/*   Updated: 2022/04/18 17:11:25 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
//#include <stdio.h>

int	ft_exec(t_stack *stack1, t_stack *stack2, char *buffer)
{
	if (ft_strequ(buffer, "sa\n"))
		sa_bonus(stack1);
	else if (ft_strequ(buffer, "sb\n"))
		sb_bonus(stack2);
	else if (ft_strequ(buffer, "ss\n"))
		ss_bonus(stack1, stack2);
	else if (ft_strequ(buffer, "pa\n"))
		pa_bonus(stack2, stack1);
	else if (ft_strequ(buffer, "pb\n"))
		pb_bonus(stack1, stack2);
	else if (ft_strequ(buffer, "ra\n"))
		ra_bonus(stack1);
	else if (ft_strequ(buffer, "rb\n"))
		rb_bonus(stack2);
	else if (ft_strequ(buffer, "rr\n"))
		rr_bonus(stack1, stack2);
	else if (ft_strequ(buffer, "rra\n"))
		rra_bonus(stack1);
	else if (ft_strequ(buffer, "rrb\n"))
		rrb_bonus(stack2);
	else if (ft_strequ(buffer, "rrr\n"))
		rrr_bonus(stack1, stack2);
	else
		ft_puterror("Error");
	return (1);
}

void	ft_stdout_reader(t_stack *stack1, t_stack *stack2)
{
	char	*buffer;

	buffer = get_next_line(0);
	while (buffer)
	{
		if (!ft_exec(stack1, stack2, buffer))
			ft_puterror("Error");
		buffer = get_next_line(0);
	}
	free(buffer);
	if (ft_issorted(stack1))
		ft_putendl("OK");
	else
		ft_putendl("KO");
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	ft_check_args(argc, argv);
	stack_a = ft_stacknew();
	stack_b = ft_stacknew();
	ft_stack_init(argc, argv, stack_a);
	ft_assign_index(stack_a);
	ft_stdout_reader(stack_a, stack_b);
	return (0);
}
