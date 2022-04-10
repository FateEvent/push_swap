# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/10 17:53:32 by faventur          #+#    #+#              #
#    Updated: 2022/04/10 19:01:33 by faventur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	main.c check_ft.c utils.c actions.c ft_stacknew.c ft_newnode.c \
	ft_stackadd_top.c ft_stackadd_bottom.c ft_stackinsert.c ft_stackclear.c \
	ft_stacksize.c ft_stackiter.c ft_stackdisplay.c

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

LINKS = -lmlx -framework OpenGL -framework AppKit

RM =	rm -f

NAME = push_swap

NONE = \033[0m
HIRED = \033[91m
HIGREEN = \033[92m
HIYELLOW = \033[93m
HIBLUE = \033[94m
HIMAGENTA = \033[95m
HICYAN = \033[96m
HIWHITE = \033[97m
RED	 = \033[31m
GREEN =	\033[32m
YELLOW = \033[33m
PINK = \033[35m
GRAY = \033[37m
CURSIVE = \033[3m

all: $(NAME)

$(NAME): $(OBJS)
	@$(MAKE) -sC ./libft
	@mv ./libft/libft.a .
	@gcc $(FLAGS) $(OBJS) $(LINKS) libft.a -o $(NAME)
	@echo "$(YELLOW)Me? I would just like to be a memory. That's all.$(NONE)"
	@echo "$(HICYAN)Curious... very curious... I remember every wand I've ever sold, Mr. Potter. It so happens that the phoenix whose tailfeather resides in your wand gave another feather... Just one other. It is curious that you should be destined for this wand when its brother gave you that scar.$(NONE) $(CURSIVE)Ollivander, J.K. Rowling's Harry Potter saga$(NONE)"
	@rm $(OBJS)

$(OBJS): $(SRCS)
	@gcc $(FLAGS) -c $(SRCS)

exe: all
	@./$(NAME)

clean:
	@$(RM) $(OBJS) libft.a
	@$(MAKE) clean -C ./libft

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) fclean -C ./libft

re: fclean all
