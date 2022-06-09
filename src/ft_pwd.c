//
// Created by Romaine Senelle on 5/24/22.
//

#include "../includes/minishell.h"

int	ft_pwd(void)
{
	char	dir[1024];

	if (getcwd(dir, 1024))
	{
		ft_putendl_fd(dir, 1);
		return (0);
	}
	else
	{
		ft_putendl_fd("cannot access parent directories", 1);
		return (1);
	}
}
