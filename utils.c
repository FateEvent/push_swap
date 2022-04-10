/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:15:08 by faventur          #+#    #+#             */
/*   Updated: 2022/04/10 18:52:43 by faventur         ###   ########.fr       */
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
	t_node	*current;
	int		*arr;
	int		i;

	if (!stack)
		return (NULL);
	current = stack->top;
	arr = malloc(sizeof(int) * size);
	i = 0;
	while (current != NULL)
	{
		arr[i] = current->content;
		current = current->next;
	}
	return (arr);
}

void	ft_assign_index(t_stack *stack)
{
	t_node	*current;
	int		*arr;
	int		size;
	int		i;
	int		j;

	i = 0;
	j = 0;
	size = ft_stacksize(stack);
	arr = ft_create_arr(stack, size);
	ft_sort_int_tab(arr, size);
	current = stack->top;
	while (i < size - 1 && current != NULL)
	{
		if (current->content == arr[i])
			current->index = i;
		current = current->next;
		i++;
	}
}

void	ft_puterror(const char *str)
{
	ft_putendl_fd(str, 2);
	exit(EXIT_FAILURE);
}

void	ft_stack_init(int argc, char *argv[], t_stack *stack)
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
		ft_stackadd_top(stack, ft_newnode(ft_atoi(arg_arr[i])));
		i++;
	}
}
