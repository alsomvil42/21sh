/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parm.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 06:10:07 by abguimba          #+#    #+#             */
/*   Updated: 2019/04/17 23:52:31 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expansions.h"
#include "sh21.h"

char	*get_parm_string(char *str)
{
	t_list		*tmp;
	t_keyval	*buf;

	if (g_tracking.mysh->set_env == NULL)
		return (NULL);
	tmp = g_tracking.mysh->set_env->firstelement;
	while (tmp)
	{
		buf = tmp->content;
		if (ft_strcmp(str, buf->key) == 0)
			return (buf->value);
		tmp = tmp->next;
	}
	return (NULL);
}
