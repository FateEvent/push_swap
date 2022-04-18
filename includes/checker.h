/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:58:09 by faventur          #+#    #+#             */
/*   Updated: 2022/04/18 17:13:17 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <fcntl.h>
# include <sys/types.h>
# include "stacks.h"
# include "../libft/includes/get_next_line.h"

void	sa_bonus(t_stack *stack_a);
void	sb_bonus(t_stack *stack_b);
void	ss_bonus(t_stack *stack_a, t_stack *stack_b);
void	pa_bonus(t_stack *stack_b, t_stack *stack_a);
void	pb_bonus(t_stack *stack_a, t_stack *stack_b);
void	ra_bonus(t_stack *stack_a);
void	rb_bonus(t_stack *stack_b);
void	rr_bonus(t_stack *stack_a, t_stack *stack_b);
void	rra_bonus(t_stack *stack_a);
void	rrb_bonus(t_stack *stack_b);
void	rrr_bonus(t_stack *stack_a, t_stack *stack_b);

#endif