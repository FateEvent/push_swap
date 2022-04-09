/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:16:16 by faventur          #+#    #+#             */
/*   Updated: 2022/04/09 18:19:44 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

int	main(int argc, char *argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;
	t_stack	master_a;
	t_stack	master_b;

//	ft_check_args(argc, argv);		// pas encore vérifié
	stack_a = (t_node *)malloc(sizeof(stack_a));
	stack_b = (t_node *)malloc(sizeof(stack_b));
	stack_a = NULL;
	stack_b = NULL;
	master_a.first = stack_a;
	ft_stack_init(argc, argv, stack_a);

	ft_stackdisplay(stack_a);
	ft_stackdisplay(stack_b);

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
