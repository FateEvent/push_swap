SRCS = main.c utils.c actions.c ft_stacknew.c ft_stacklast.c ft_stackpush.c ft_stackadd_top.c ft_stackadd_bottom.c ft_stackdel_top.c ft_stackdelone.c ft_stackclear.c ft_stacksize.c ft_stackiter.c ft_stackdisplay.c

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
	@echo "$(CURSIVE)$(HIGREEN)Parce qu'ouvrir une fenêtre,$(NONE)"
	@echo "$(CURSIVE)$(PINK)c'est surfait.$(NONE)"
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
