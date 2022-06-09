cmake_minimum_required(VERSION 3.21)
project(minishell C)

set(CMAKE_C_STANDARD 99)
include_directories(.)

AUX_SOURCE_DIRECTORY(dir libft)
add_executable(minishell
        includes/minishell.h
        src/main.c
        src/ft_pwd.c
        src/utils.c
        src/envCreate.c
        src/echo.c
        libft/ft_strncmp.c
        libft/ft_strlcat.c
        libft/ft_strlen.c
        libft/ft_putstr_fd.c
        libft/ft_putendl_fd.c
        libft/ft_putchar_fd.c
        libft/ft_lstnew.c
        libft/ft_lstclear.c
        libft/ft_lstadd_back.c
        libft/ft_calloc.c
        libft/ft_lstdelone.c
        libft/ft_lstlast.c
        libft/ft_lstlast.c
        libft/ft_strdup.c
        libft/libft.h
        src/export.c)
