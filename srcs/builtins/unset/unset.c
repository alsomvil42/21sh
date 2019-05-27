/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 12:52:33 by abguimba          #+#    #+#             */
/*   Updated: 2019/04/17 23:52:31 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh21.h"
#include "environ.h"

int			ft_unset(void)
{
	char	**taab;
	int		i;

	taab = g_tracking.g_tab_exec;
	i = 1;
	while (taab[i])
		remove_env_string(taab[i++]);
	i = 1;
	while (taab[i])
		remove_set_env_string(taab[i++]);
	return (0);
}
