# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsenelle <rsenelle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/06 17:21:43 by rsenelle          #+#    #+#              #
#    Updated: 2022/01/25 18:32:09 by rsenelle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	ft_atoi_ps.c	ft_bzero.c		ft_calloc.c\
			ft_isalnum.c	ft_isalpha.c	ft_isascii.c\
			ft_isdigit.c	ft_isprint.c	ft_memchr.c\
			ft_memcmp.c		ft_toupper.c	ft_memcpy.c\
			ft_memmove.c	ft_memset.c		ft_itoa.c\
			ft_putchar_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c\
			ft_putstr_fd.c	ft_strchr.c		ft_strdup.c\
			ft_striteri.c	ft_strjoin.c	ft_strlcat.c\
			ft_strlcpy.c	ft_strlen.c		ft_strmapi.c\
			ft_strncmp.c	ft_strnstr.c	ft_strrchr.c\
			ft_strtrim.c	ft_substr.c		ft_tolower.c\
			ft_split.c \
			ft_lstnew.c		ft_lstadd_front.c		ft_lstsize.c\
			ft_lstlast.c	ft_lstadd_back.c		ft_lstdelone.c\
			ft_lstclear.c
		
OBJ		= 	${SRC:.c=.o}
NAME	=	libft.a
CC		=	gcc
FLAGS	=	-Wall -Werror -Wextra
HEADER	=	libft.h
LIBC 	=	ar rc
LIBR	=	ranlib
RM		=	rm -f

.c.o	:	${HEADER}
			@echo ''`${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${HEADER}`''

${NAME}	:	${HEADER} ${OBJ}
			@echo '✨ ✨ ✨ '`${LIBC} ${NAME} ${OBJ}`''

all		:	${NAME}


clean	:
			@echo ''`${RM} ${OBJ} ${OBJ_BONUS}`''

fclean	:	clean
			@echo 'WOW!'`${RM} ${NAME} ${OBJ_BONUS}`''

re		:	fclean all

.PHONY	:	.c.o all clean fclean re