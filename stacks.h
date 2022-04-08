/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:10:47 by faventur          #+#    #+#             */
/*   Updated: 2022/04/08 18:20:05 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACKS_H
# define STACKS_H

# include "libft/includes/libft.h"
# include "libft/includes/ft_printf.h"

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}					t_stack;

t_stack	*ft_stacknew(int content);
t_stack	*ft_stackmap(t_stack *stack, void *(*f)(void *), void (*del)(void *));
t_stack	*ft_stacklast(t_stack *stack);
void	ft_stackpush(t_stack **stack, int n);
void	ft_stackadd_front(t_stack **stack, t_stack *new);
void	ft_stackadd_back(t_stack **stack, t_stack *new);
void	ft_stackiter(t_stack *stack, void (*f)(int));
void	ft_stackdelone(t_stack *stack, void (*del)(void *));
void	ft_stackclear(t_stack **stack, void (*del)(void *));
int		ft_stacksize(t_stack *stack);

void	ft_stack_init(int argc, char *argv[], t_stack **stack);
int		ft_check_args(int argc, char *argv[]);
void	ft_puterror(const char *str);

#endif