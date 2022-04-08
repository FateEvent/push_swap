/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:16:16 by faventur          #+#    #+#             */
/*   Updated: 2022/04/08 21:40:59 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

int	main(int argc, char *argv[])
{
	t_stack	**stack_a;
	t_stack	**stack_b;
	int		size;

	ft_check_args(argc, argv);
	stack_a = (t_stack **)malloc(sizeof(stack_a));
	stack_b = (t_stack **)malloc(sizeof(stack_b));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_stack_init(argc, argv, stack_a);
	size = ft_stacksize(*stack_a);
}

/**
 * if the rightmost bit is 0, we pb
 * else we ra and pass to the following
 * and so on
 * after that pa for every num in stack b
 * we do then the same for the bit on the right.
 * and then for the the bit on the right of it
 * until there are no bits left
 * 
 * Je cree mes deux listes de la meme taille (en me basant sur le nombre d'elements que je recois, que je compte)
 * Je 
 * 
 * 
*/
