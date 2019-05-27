/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_tools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 05:02:51 by abguimba          #+#    #+#             */
/*   Updated: 2019/04/17 23:52:08 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	end_var(char **varname, char **varvalue)
{
	ft_strdel(varname);
	ft_strdel(varvalue);
}

void	init_var(char **varname, char **varvalue, char *run_str)
{
	char	*run_varname;
	char	*run_varvalue;
	int		i;
	int		j;

	i = 0;
	j = 0;
	run_varname = ft_strnew(ft_strlen(run_str));
	while (run_str[i] && run_str[i] != '=')
	{
		run_varname[i] = run_str[i];
		i++;
	}
	*varname = run_varname;
	if (run_str[i++])
	{
		run_varvalue = ft_strnew(ft_strlen(run_str));
		while (run_str[i] != '\0')
			run_varvalue[j++] = run_str[i++];
		*varvalue = run_varvalue;
	}
	else
		*varvalue = NULL;
}

int		is_new_value(char *run_str)
{
	int		i;

	i = 0;
	while (run_str[i])
	{
		if (run_str[i] == '=' && i > 0
				&& run_str[i - 1] != ':' && run_str[i - 1] != ' ')
			return (1);
		i++;
	}
	return (0);
}
