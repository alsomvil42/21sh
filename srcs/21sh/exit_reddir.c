/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_reddir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 07:28:50 by abguimba          #+#    #+#             */
/*   Updated: 2019/04/17 23:52:31 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh21.h"

int			exit_reddir(void)
{
	if (g_tracking.builtin == 1 || !g_tracking.temp_command)
	{
		g_tracking.builtin = 0;
		return (-1);
	}
	else
		ft_exit2(EXIT_SUCCESS);
	return (0);
}
