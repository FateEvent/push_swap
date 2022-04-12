/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:10:47 by faventur          #+#    #+#             */
/*   Updated: 2022/04/12 12:32:17 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACKS_H
# define STACKS_H

# include "libft/includes/libft.h"
# include "libft/includes/ft_printf.h"

typedef struct s_node
{
	int				content;
	int				index;
	struct s_node	*prev;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	size_t			length;
	struct s_node	*top;
	struct s_node	*bottom;
}					t_stack;

t_stack	*ft_stacknew(void);
t_node	*ft_newnode(int content);
t_stack	*ft_stackadd_top(t_stack *stack, t_node *new);
t_stack	*ft_stackadd_bottom(t_stack *stack, t_node *new);
t_stack	*ft_stackinsert(t_stack *stack, t_node *node, int position);
void	ft_stackclear(t_stack **stack);
int		ft_stacksize(t_stack *stack);
void	ft_stackdisplay(t_stack *stack);
void	ft_displayindex(t_stack *stack);

void	ft_stack_init(int argc, char *argv[], t_stack *stack);
int		ft_check_args(int argc, char *argv[]);
void	ft_puterror(const char *str);
void	ft_assign_index(t_stack *stack);
void	ft_sort_int_tab(int	*tab, int size);
void	ft_issorted(t_stack *stack);

void	ft_swap(t_stack *stack);
void	ft_push(t_stack *stack1, t_stack *stack2);
void	ft_rotate(t_stack *stack);
void	ft_rev_rotate(t_stack *stack);
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack *stack_b, t_stack *stack_a);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);

void	radix_sort(t_stack *stack1, t_stack *stack2, int size);

#endif