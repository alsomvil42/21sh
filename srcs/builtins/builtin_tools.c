/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 12:52:33 by abguimba          #+#    #+#             */
/*   Updated: 2019/04/17 23:52:08 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh21.h"

int			builtin_exec_cont_2(void)
{
	if (ft_builtin_search("true"))
		return (0);
	else if (ft_builtin_search("false"))
		return (1);
	else if (ft_builtin_search("setenv"))
		return (ft_setenv());
	else if (ft_builtin_search("unsetenv"))
		return (ft_unsetenv());
	return (0);
}

int			cd_args_len(void)
{
	char	**tmp;
	int		i;

	i = 0;
	tmp = g_tracking.g_tab_exec;
	while (tmp[i])
		i++;
	return (i);
}
