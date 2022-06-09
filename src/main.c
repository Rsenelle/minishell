//
// Created by Romaine Senelle on 5/8/22.
//

#include "../includes/minishell.h"

int main(int argc, char **argv, char **env)
{
	t_all s_all;

	(void)argc;

	if (ft_pwd())
		return (1);
	s_all.env = NULL;
	env_create(env, &s_all.env);
	printlist(s_all.env);
	ft_env(s_all.env);

//	ft_lstclear(&s_all.env, free);
	t_list *sample = NULL;
	int i = 0;
	while(argv[i])
	{
		ft_lstadd_back(&sample, ft_lstnew(ft_strdup(argv[i])));
		i += 1;
	}
	MyEcho(sample);
	return 0;
}
