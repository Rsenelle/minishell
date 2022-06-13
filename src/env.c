//
// Created by Romaine Senelle on 5/28/22.
//

#include "../includes/minishell.h"

int checkEqual(char *str)
{
	while (*str)
	{
		if (*str == '=')
			return (0);
		str++;
	}
	return (1);
}

int printEnv(t_list *env)
{
	int i;

	i = 0;
	while(env)
	{
		if (!checkEqual(env->str))
			printf("%d %s\n", i++, env->str);
		env=env->next;
	}
	return (EXIT_SUCCESS);
}

int ft_env(t_list *env)
{
	if (env) {
		printEnv(env);
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}
