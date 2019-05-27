/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_unquoter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 07:35:27 by abguimba          #+#    #+#             */
/*   Updated: 2019/04/17 23:52:31 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expansions.h"

void	clean_unquoter(t_unquoter *unq)
{
	t_unquoter	*prev;

	while (unq)
	{
		prev = unq;
		if (unq->str_unquoted)
			ft_strdel(&unq->str_unquoted);
		unq->str_unquoted = NULL;
		unq = unq->next;
		ft_free(prev);
	}
	unq = NULL;
}
