/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   its_pipe.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 18:17:07 by abguimba          #+#    #+#             */
/*   Updated: 2019/04/17 23:52:31 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh21.h"

int		its_pipe(t_last *list)
{
	int		i;

	i = 0;
	if (list && list->name[i]
			&& ft_strlen(list->name) == 1 && list->name[i] == '|')
		return (1);
	return (0);
}
