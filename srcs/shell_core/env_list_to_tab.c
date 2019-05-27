/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_list_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 04:40:40 by abguimba          #+#    #+#             */
/*   Updated: 2019/04/17 23:52:31 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh21.h"

char				**init_envp(t_lstcontainer *env)
{
	int			i;
	char		**envp;
	t_list		*tmp;
	t_keyval	*buf;

	envp = NULL;
	if (env != NULL)
	{
		i = env->size(env) + 1;
		envp = ft_malloc(sizeof(char *) * i + 1);
		i = 0;
		tmp = env->firstelement;
		while (tmp)
		{
			buf = tmp->content;
			envp[i] = ft_strnew(0);
			envp[i] = ft_strjoinfree(envp[i], buf->key, 1);
			envp[i] = ft_strjoinfree(envp[i], "=", 1);
			envp[i] = ft_strjoinfree(envp[i], buf->value, 1);
			tmp = tmp->next;
			i++;
		}
		envp[i] = NULL;
	}
	return (envp);
}
