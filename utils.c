/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:15:08 by faventur          #+#    #+#             */
/*   Updated: 2022/04/09 12:14:07 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

void	ft_sort_int_tab(int	*tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

static int	*ft_create_arr(t_stack *stack, int size)
{
	int	*arr;
	int	i;

	if (!stack)
		return (NULL);
	arr = malloc(sizeof(int) * size);
	i = 0;
	while (stack != NULL)
	{
		arr[i] = stack->content;
		stack = stack->next;
	}
	return (arr);
}

void	ft_assign_index(t_stack **stack)
{
	int	*arr;
	int	size;
	int	i;
	int	j;

	size = ft_stacksize(*stack);
	i = 0;
	j = 0;
	arr = ft_create_arr(*stack, size);
	ft_sort_int_tab(arr, size);
	while (i < size - 1 && stack != NULL)
	{
		if ((*stack)->content == arr[i])
			(*stack)->index = i;
		(*stack) = (*stack)->next;
		i++;
	}
}

void	ft_puterror(const char *str)
{
	ft_putendl_fd(str, 2);
	exit(EXIT_FAILURE);
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
