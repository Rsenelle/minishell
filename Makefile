NAME		=	minishell

HEADER		=	minishell.h

SRC_F		=	main.c

SRCS_D		=	src/

INCLUDE		=	-I./includes/ -I./libft/

SRCS		=	$(addprefix $(SRCS_D),$(SRC_F))

OBJS		=	$(SRCS:.c=.o)

FLAGS		=	-Wall -Wextra -Werror

LIBFT		=	./libft/libft.a

%.o			: 	%.c	$(HEADER)
				@echo 'Some magic...'`gcc $(FLAGS) -o $@ -c $< -I $(HEADER) -o $(<:.c=.o)`''

all			:	$(NAME)

$(NAME)		:	$(OBJ) $(HEADER)
				@echo 'Some magic...'`$(MAKE) -C $(dir $(LIBFT))`''
				@echo 'Done'`gcc $(FLAGS) $(INCLUDE) $(LIBFT) $(OBJS) -o $(NAME)`''

clean		:
				@echo 'Cleaning...'`$(MAKE) clean -C $(dir $(LIBFT))`''
				@echo 'Cleaned'`rm -rf $(OBJS)`''


fclean		:	clean
				@echo 'Cleaning...'`$(MAKE) fclean -C $(dir $(LIBFT))`''
				@echo 'Cleaned all'`rm -rf $(NAME)`''

re			:	fclean all

.PHONY		:	all clean fclean re