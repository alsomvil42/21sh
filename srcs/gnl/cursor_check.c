/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cursor_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 02:54:31 by alsomvil          #+#    #+#             */
/*   Updated: 2019/04/17 23:56:39 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh21.h"

int	check_up(void)
{
	int		x;
	int		ab;

	ab = g_tracking.pos->abs;
	x = g_tracking.terminfo->sizex;
	if (ab - x > 0)
		return (0);
	else
		return (1);
}

int	check_down(void)
{
	int		i;
	int		x;
	int		ab;

	ab = g_tracking.pos->abs;
	x = g_tracking.terminfo->sizex;
	i = utf_strlen(g_tracking.str);
	if (ab + x < i)
		return (0);
	else
		return (1);
}
