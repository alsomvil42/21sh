/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auto_complete_cursor.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 03:49:52 by alsomvil          #+#    #+#             */
/*   Updated: 2019/04/17 23:56:39 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh21.h"

void			back_up_add(void)
{
	int			y;
	int			ab;

	ab = utf_strlen(g_tracking.str);
	ab += g_tracking.pos->prompt;
	ab--;
	ab += utf_strlen(g_tracking.aut->to_add);
	y = ab / g_tracking.terminfo->sizex;
	y = y - (g_tracking.pos->y);
	g_tracking.aut->to_add_y = y;
	while (y > 0)
	{
		y--;
		tputs(tgetstr("up ", NULL), 1, yan_putchar);
	}
	tputs(tgetstr("cr ", NULL), 1, yan_putchar);
}

void			go_back_down(void)
{
	int			y;
	int			ab;

	ab = utf_strlen(g_tracking.str);
	ab += g_tracking.pos->prompt;
	ab--;
	ab += utf_strlen(g_tracking.aut->to_add);
	y = ab / g_tracking.terminfo->sizex;
	y = y - (g_tracking.pos->y);
	while (y > 0)
	{
		y--;
		tputs(tgetstr("do ", NULL), 1, yan_putchar);
	}
}
