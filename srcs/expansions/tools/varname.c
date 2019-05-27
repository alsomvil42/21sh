/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   varname.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 05:01:23 by abguimba          #+#    #+#             */
/*   Updated: 2019/04/17 23:52:31 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expansions.h"

char	*get_varname(t_expand *expand)
{
	int			i;
	char		*var;
	t_expand	*to_run;

	i = 0;
	to_run = expand->next;
	if (to_run->ltr == '#' || to_run->ltr == '%')
		to_run = to_run->next;
	while (to_run && to_run->ltr != ':' && to_run->ltr != '}'
			&& to_run->ltr != '/' && (to_run->ltr != '#' || to_run->ltr != '%'))
	{
		to_run = to_run->next;
		i++;
	}
	var = ft_strnew(i + 1);
	to_run = expand->next;
	return (varname(var, to_run));
}
