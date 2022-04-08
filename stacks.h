/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:10:47 by faventur          #+#    #+#             */
/*   Updated: 2022/04/08 14:06:07 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACKS_H
# define STACKS_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}					t_stack;

t_stack	*ft_lstnew(void *content);
void	ft_stackpush(t_stack **stack, int n);
int		ft_stacksize(t_stack *stack);
void	ft_stackiter(t_stack *stack, void (*f)(int));
t_stack	*ft_stackmap(t_stack *stack, void *(*f)(void *), void (*del)(void *));
void	ft_stackdelone(t_stack *stack, void (*del)(void *));
void	ft_stackclear(t_stack **stack, void (*del)(void *));

#endif