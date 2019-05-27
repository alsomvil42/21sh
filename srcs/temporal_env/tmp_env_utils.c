/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmp_env_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 12:23:43 by abguimba          #+#    #+#             */
/*   Updated: 2019/04/17 23:52:08 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "temporal_env.h"
#include "sh21.h"

void		check_if_tmpenv(void)
{
	t_tmpenv	*tmp;

	tmp = g_tracking.mysh->tmpenv;
	if (tmp)
	{
		while (tmp && tmp->cmdindex != g_tracking.cmdindex)
			tmp = tmp->next;
		if (tmp && tmp->cmdindex == g_tracking.cmdindex)
		{
			while (tmp && tmp->cmdindex == g_tracking.cmdindex)
			{
				set_tmp_env(tmp->key, tmp->value);
				tmp = tmp->next;
			}
		}
	}
}

void		free_env(void)
{
	free_keyval(g_tracking.mysh->env);
	g_tracking.mysh->env = NULL;
}

char		*clean_line_tmp_helper(int len, char *str, int save)
{
	char	*new;

	if (!(new = ft_malloc(sizeof(char) * len + 1)))
		return (NULL);
	len = 0;
	while (str[len] && is_spaces(str, len, 2))
	{
		new[len] = str[len];
		len++;
	}
	while (str[save] != '\0')
	{
		new[len] = str[save];
		len++;
		save++;
	}
	new[len] = '\0';
	ft_strdel(&str);
	return (new);
}
