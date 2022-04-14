# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/10 17:53:32 by faventur          #+#    #+#              #
#    Updated: 2022/04/14 22:19:56 by faventur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	main.c check_ft.c utils.c actions.c algorithm.c algorithm2.c \
	rules1.c rules2.c rules3.c position.c ft_stacknew.c ft_newnode.c \
	ft_stackadd_top.c ft_stackadd_bottom.c ft_stackinsert.c \
	ft_stackclear.c ft_stacksize.c ft_stackdisplay.c

SRCSB =	checker.c check_ft_bonus.c utils_bonus.c actions_bonus.c \
	rules1_bonus.c rules2_bonus.c rules3_bonus.c position_bonus.c \
	stack_ft_bonus.c

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
	@echo "$(HIMAGENTA)Curious... very curious... I remember every wand I've ever$(NONE)"
	@echo "$(GREEN)sold, Mr. Potter. It so happens that the phoenix whose tail-$(NONE)"
	@echo "$(YELLOW)feather resides in your wand gave another feather... Just one$(NONE)"
	@echo "$(HIRED)other. It is curious that you should be destined for this wand$(NONE)"
	@echo "$(HICYAN)when its brother gave you that scar.$(NONE) Ollivander, $(CURSIVE)Harry Potter$(NONE)"
	@echo "$(CURSIVE)and the Philosopher's Stone$(NONE)"
	@rm $(OBJS)

$(OBJS): $(SRCS)
	@gcc $(FLAGS) -c $(SRCS)

bonus: $(NAME_B)

$(NAME_B): $(OBJS) $(OBJSB)
	@$(MAKE) -sC ./libft
	@mv ./libft/libft.a .
	@gcc $(FLAGS) $(OBJS) $(LINKS) libft.a -o $(NAME)
	@gcc $(FLAGS) $(OBJSB) $(LINKS) libft.a -o $(NAME_B)
	@echo "$(GREEN)Not Slytherin, eh? Are you sure? You could be great, you know.$(NONE)"
	@echo "$(YELLOW)It's all here in your head. And Slytherin will help you on the$(NONE)"
	@echo "$(HICYAN)way to greatness, there's no doubt about that. No?$(NONE) The Sorting"
	@echo "Hat, $(CURSIVE)Harry Potter and the Philosopher's Stone$(NONE)"
	@rm $(OBJS) $(OBJSB)

$(OBJSB): $(SRCSB)
	@gcc $(FLAGS) -c $(SRCSB)

clean:
	@$(RM) $(OBJS) $(OBJSB) libft.a
	@$(MAKE) clean -C ./libft

fclean: clean
	@$(RM) $(NAME) $(NAME_B)
	@$(MAKE) fclean -C ./libft

re: fclean all
