/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:15:08 by faventur          #+#    #+#             */
/*   Updated: 2022/04/08 22:43:25 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

void	ft_puterror(const char *str)
{
	ft_putendl_fd(str, 2);
	exit(EXIT_FAILURE);
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

static int	ft_repeat(char *nptr, char *args[], int i)
{
	while (args[++i])
	{
		if (!ft_strequ(nptr, args[i]))
			return (0);
		i++;
	}
	return (1);

}

int	ft_check_args(int argc, char *argv[])
{
	char	**arg_arr;
	long	tmp;
	int		i;

	i = 0;
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
			|| !ft_repeat(arg_arr[i], arg_arr, i))
			ft_puterror("Error!");
		i++;
	}
	return (0);
}

void	ft_stack_init(int argc, char *argv[], t_stack **stack)
{
	char	**arg_arr;
	int		i;

	i = 0;
	if (argc == 2)
		arg_arr = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		arg_arr = argv;
	}
	while (arg_arr[i])
	{
		ft_stackadd_top(stack, ft_stacknew(ft_atoi(arg_arr[i])));
		i++;
	}
}
