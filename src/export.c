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
		if (ft_strncmp(exp->str, exp->next->str, ft_strlen(exp->str)))
		{

		}
		exp = exp->next;
	}
}

void sortExport()

int	export(t_list **env)
{

}