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

void	ft_stackpush(t_stack **stack, int n);

t_list	*ft_lstnew(void *content);

int		ft_lstsize(t_list *lst);
void	ft_stackiter(t_list *lst, void (*f)(int));

void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list	*ft_lstlast(t_list *lst);

#endif