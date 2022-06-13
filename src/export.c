//
// Created by Romaine Senelle on 6/9/22.
//

#include "../includes/minishell.h"

char *searchMin(t_list *exp)
{
	char *min;

	min = exp->str;
	while (exp)
	{
		if (ft_strncmp(exp->next->str, exp->str, ft_strlen(exp->str)) < 0)
		{
			min = exp->next->str;
		}
		exp = exp->next;
	}
	return (min);
}

void sortExport(t_list *env)
{
	short no_rerange;
	char *tmp;
	t_list *head;

	tmp = NULL;
	head = env;
	no_rerange = 1;
	while (no_rerange == 1)
	{
		env = head;
		no_rerange = 0;
		while (env->next->next)
		{
			if (ft_strncmp(env->str, env->next->str, ft_strlen(env->str)) > 0)
			{
				tmp = env->str;
				env->str = env->next->str;
				env->next->str = tmp;
				no_rerange = 1;
			}
			env = env->next;
		}
	}
}

int	export(t_list *env)
{


	sortExport(env);
	return 0;

}