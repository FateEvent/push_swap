# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/10 17:53:32 by faventur          #+#    #+#              #
#    Updated: 2022/04/13 20:22:40 by faventur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	main.c check_ft.c utils.c actions.c algorithm.c algorithm2.c \
	rules1.c rules2.c rules3.c position.c ft_stacknew.c ft_newnode.c \
	ft_stackadd_top.c ft_stackadd_bottom.c ft_stackinsert.c \
	ft_stackclear.c ft_stacksize.c ft_stackdisplay.c

SRCSB =	checker.c check_ft.c utils.c actions.c algorithm.c algorithm2.c \
	rules1.c rules2.c rules3.c position.c ft_stacknew.c ft_newnode.c \
	ft_stackadd_top.c ft_stackadd_bottom.c ft_stackinsert.c \
	ft_stackclear.c ft_stacksize.c ft_stackdisplay.c

OBJS = $(SRCS:.c=.o)
OBJSB = $(SRCSB:.c=.o)

FLAGS = -Wall -Wextra -Werror

RM =	rm -f

NAME = push_swap

NAME_B = checker

NONE = \033[0m
HIRED = \033[91m
HIMAGENTA = \033[95m
HICYAN = \033[96m
GREEN =	\033[32m
YELLOW = \033[33m
CURSIVE = \033[3m

all: $(NAME)

$(NAME): $(OBJS)
	@$(MAKE) -sC ./libft
	@mv ./libft/libft.a .
	@gcc $(FLAGS) $(OBJS) $(LINKS) libft.a -o $(NAME)
	@echo "$(HIMAGENTA)Curious... very curious... I remember every wand I've ever sold$(NONE)"
	@echo "$(GREEN)Mr. Potter. It so happens that the phoenix whose tailfeather$(NONE)"
	@echo "$(YELLOW)resides in your wand gave another feather... Just one other.$(NONE)"
	@echo "$(HIRED)It is curious that you should be destined for this wand when$(NONE)"
	@echo "$(HICYAN)its brother gave you that scar.$(NONE) Ollivander, $(CURSIVE)Harry Potter$(NONE)"
	@rm $(OBJS)

$(OBJS): $(SRCS)
	@gcc $(FLAGS) -c $(SRCS)

bonus: ${NAME_B}

$(NAME_B): $(OBJSB)
	@$(MAKE) -sC ./libft
	@mv ./libft/libft.a .
	@gcc $(FLAGS) $(OBJS) $(LINKS) libft.a -o $(NAME)
	@gcc $(FLAGS) $(OBJSB) $(LINKS) libft.a -o $(NAME_B)

clean:
	@$(RM) $(OBJS) libft.a
	@$(MAKE) clean -C ./libft

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) fclean -C ./libft

re: fclean all
