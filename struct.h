/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:10:47 by faventur          #+#    #+#             */
/*   Updated: 2022/03/25 13:40:13 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_stack
{
	void			*content;
	struct s_stack	*next;
}					t_stack;

t_stack	*ft_lstnew(void *content);
void	ft_stackpush(t_stack **stack, int n);
int		ft_stacksize(t_stack *stack);
void	ft_stackdelone(t_stack *stack, void (*del)(void *));
void	ft_stackiter(t_stack *stack, void (*f)(int));

void	ft_lstclear(t_list **lst, void (*del)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif