/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:16:16 by faventur          #+#    #+#             */
/*   Updated: 2022/04/09 15:50:18 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

int	main(int argc, char *argv[])
{
	t_stack	**stack_a;
	t_stack	**stack_b;
	int		size;
	int	size2;

//	ft_check_args(argc, argv);		// pas encore vérifié
	stack_a = (t_stack **)malloc(sizeof(stack_a));
	stack_b = (t_stack **)malloc(sizeof(stack_b));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_stack_init(argc, argv, stack_a);
	size = ft_stacksize(*stack_a);
	ft_printf("%d\n", size);
//	ft_stackdel_bottom(stack_a);	// efface pas
//	ft_stackdel_top(stack_a);		// efface pas
	ft_stackdelone(*stack_a);		// efface pas
	size2 = ft_stacksize(*stack_a);
	ft_printf("%d\n", size2);
	ft_stackdisplay(*stack_a);
	ft_stackdisplay(*stack_b);
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
