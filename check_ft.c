/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 11:31:50 by faventur          #+#    #+#             */
/*   Updated: 2022/04/09 11:32:09 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

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
