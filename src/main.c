//
// Created by Romaine Senelle on 5/8/22.
//

#include "../includes/minishell.h"

int main(int argc, char **argv, char **env)
{
	t_all s_all;

	(void)argc;
	(void)argv;


//	if (ft_pwd())
//		return (1);
	s_all.env = NULL;
	while (1) {
		env_create(env, &s_all.env);
		printf("\n");
		export(s_all.env);
		break ;
	}
//	printlist(s_all.env);
//	ft_env(s_all.env);

//	ft_lstclear(&s_all.env, free);
//	t_list *sample = NULL;
//	int i = 0;
//	while(argv[i])
//	{
//		ft_lstadd_back(&sample, ft_lstnew(ft_strdup(argv[i])));
//		i += 1;
//	}
//	MyEcho(sample);
//	printlist(s_all.export);
//	printf("\n");
//	export(s_all.export);
//	print_export(s_all.export);
	return 0;
}
