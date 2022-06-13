//
// Created by Romaine Senelle on 03/06/2022.
//

#include "../includes/minishell.h"

int	CheckFlag(char *str, int *flag)
{
	int i;

	if (str[0] == '-')
	{
		i = 1;
		while (str[i] == 'n' && str[i])
		{
			i++;
		}
		if (str[i] == '\0')
		{
			*flag = 1;
			return (1);
		}
	}
	return (0);
}

int MyEcho(t_list *args)
{
	int	flag;

	flag = 0;
	t_list *tmp = args;
	while (tmp)
	{
		if (CheckFlag(tmp->str, &flag))
			tmp = tmp->next;
		else if ((flag == 1 && tmp->next) || (flag == 0 && tmp->next))
		{
			ft_putstr_fd(tmp->str, 1);
			ft_putchar_fd(' ', 1);
			tmp = tmp->next;
		}
		else if (flag == 1)
		{
			ft_putstr_fd(tmp->str, 1);
			tmp = tmp->next;
		}
		else
		{
			ft_putendl_fd(tmp->str, 1);
			tmp = tmp->next;
		}
	}
	return (0);
}