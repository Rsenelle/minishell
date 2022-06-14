//
// Created by Romaine Senelle on 5/24/22.
//

#include "../includes/minishell.h"

void	printlist(t_list *lst)
{
	int i;

	i = 0;
	while(lst)
	{
		printf("%d %s\n", i++, lst->str);
		lst=lst->next;
	}
}

