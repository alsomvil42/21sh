/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_altern.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 03:46:10 by abguimba          #+#    #+#             */
/*   Updated: 2019/04/17 23:52:31 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expansions.h"
#include "sh21.h"

void	reassign_str_altern(char **str, t_analyzer *to_analy)
{
	if (to_analy->varvalue)
	{
		ft_strdel(str);
		*str = ft_strdup(to_analy->varvalue);
	}
	else
	{
		ft_strdel(str);
		*str = ft_strdup(" ");
	}
}
