//
// Created by Romaine Senelle on 6/9/22.
//

#include "../includes/minishell.h"

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
		while (env->next)
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
void	print_export(t_list *lst)
{
	int i, j;

	i = 0;
	sortExport(lst);
	while(lst)
	{
		j = 0;
		ft_putnbr_fd(i++, 1);
		ft_putstr_fd(" declare -x ", 1);
		while (lst->str[j] != '=' || lst->str[j])
		{
			ft_putchar_fd(lst->str[j], 1);
			j++;
			if (lst->str[j] == '=')
				break ;
		}
		if (lst->str[j])
		{
			ft_putchar_fd(lst->str[j], 1);
			ft_putchar_fd('\"', 1);
			while (lst->str[j++])
				ft_putchar_fd(lst->str[j], 1);
			ft_putendl_fd("\"", 1);
		} else
			ft_putchar_fd('\n', 1);
		lst=lst->next;
	}
}

int	export(t_list *env, char **argv)
{
	if (argv[1])
	{

	}
	print_export(env);
	return 0;

}