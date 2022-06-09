//
// Created by Romaine Senelle on 5/26/22.
//

#include "../includes/minishell.h"

int env_create(char **env, t_list **env_list)
{
	int 	i;

	i = -1;
	while (env[++i])
		ft_lstadd_back(env_list, ft_lstnew(ft_strdup(env[i])));
	return 0;
}

int ft_upd_env(t_list **env, char *key, char *val)
{
	int len_key;
	char *new_val;
	t_list *temp = *env;


	len_key = ft_strlen(key);
	new_val = ft_calloc(len_key + ft_strlen(val) + 2, 1);
	ft_strlcat(new_val, key, len_key + ft_strlen(val) + 2);
	ft_strlcat(new_val, "=", len_key + ft_strlen(val) + 2);
	ft_strlcat(new_val, val, len_key + ft_strlen(val) + 2);
	while (temp)
	{
		if (!ft_strncmp(key, temp->str, len_key) && temp->str[len_key] == '=')
		{
			free(temp->str);
			temp->str = new_val;
			return (0);
		}
		temp = temp->next;
	}
	ft_lstadd_back(env, ft_lstnew(new_val));
	return (0);
}
