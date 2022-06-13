//
// Created by Romaine Senelle on 5/8/22.
//

#ifndef MINISHELL_H
# define MINISHELL_H

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <sys/wait.h>
# include <stdlib.h>
# include <signal.h>
# include <dirent.h>
# include <sys/errno.h>
# include <termios.h>
# include <term.h>
# include "../libft/libft.h"

typedef struct	s_all
{
	t_list *env;
	t_list *export;
	t_list *arg;
}				t_all;


//builtins
int		ft_pwd(void);
int 	env_create(char **env, t_list **env_list);
int 	ft_upd_env(t_list **env, char *key, char *val);
int		MyEcho(t_list *args);
int 	ft_env(t_list *env);
int		export(t_list *env);



//utils
void	printlist(t_list *lst);


#endif
