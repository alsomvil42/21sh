/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jobs_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 12:52:33 by abguimba          #+#    #+#             */
/*   Updated: 2019/04/17 23:52:31 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh21.h"

void		jobs_builtin_mode_helper(t_jobs *tmp, int options)
{
	if (tmp->background == 1 && tmp->t_command->stopped != 1)
		ft_putstr("Running           ");
	if (options != 1 && tmp->t_command->stopped == 1)
		ft_putstr("Stopped           ");
	else if (options == 1)
		ft_putstr("Suspended           ");
	else
		ft_putstr("       ");
	ft_putstr(tmp->name);
}
