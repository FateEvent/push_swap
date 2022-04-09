/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:10:47 by faventur          #+#    #+#             */
/*   Updated: 2022/04/09 21:52:06 by faventur         ###   ########.fr       */
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

t_stack	*stack_new(void);
t_node	*ft_newnode(int content);
t_stack	*ft_stackadd_top(t_node **stack, t_node *new);
t_stack	*ft_stackadd_bottom(t_stack *stack, int content);

// a revoir
t_node	*ft_stacklast(t_node *stack);
void	ft_stackpush(t_node **stack, int n);

void	ft_stackdelone(t_node *stack);
void	ft_stackclear(t_node **stack);
void	ft_stackiter(t_node *stack, void (*f)(int));
void	ft_stackdisplay(t_node *stack);
int		ft_stacksize(t_node *stack);

void	ft_stack_init(int argc, char *argv[], t_node *stack);
int		ft_check_args(int argc, char *argv[]);
void	ft_puterror(const char *str);

void	ft_assign_index(t_node **stack);
void	ft_sort_int_tab(int	*tab, int size);

#endif