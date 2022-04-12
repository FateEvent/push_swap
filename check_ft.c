/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 11:31:50 by faventur          #+#    #+#             */
/*   Updated: 2022/04/12 22:31:49 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

int	ft_issorted(t_stack *stack)
{
	t_node	*current;

	if (stack != NULL)
	{
		current = stack->top;
		while (current->next != NULL)
		{
			if (current->index > current->next->index)
			{
				return (0);
			}
			current = current->next;
		}
	}
	return (1);
}

static int	ft_isnumber(char *nptr)
{
	int	i;

	i = 0;
	if (nptr[i] == '-')
		i++;
	while (nptr[i])
	{
		if (!ft_isdigit(nptr[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	ft_repeat(long tmp, char *args[], int index)
{
	long	tester;

	while (args[++index] != NULL)
	{
		tester = ft_atoi(args[index]);
		if (tester == tmp)
			return (0);
	}
	return (1);
}

int	ft_check_args(int argc, char *argv[])
{
	char	**arg_arr;
	long	tmp;
	int		i;

	i = 0;
	if (argc == 1)
		ft_puterror("Error");
	if (argc == 2)
		arg_arr = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		arg_arr = argv;
	}
	while (arg_arr[i])
	{
		tmp = ft_atoi(arg_arr[i]);
		if (!ft_isnumber(arg_arr[i]) || tmp > 2147483647 || tmp < -2147483648
			|| !ft_repeat(tmp, arg_arr, i))
			ft_puterror("Error");
		i++;
	}
	return (0);
}
