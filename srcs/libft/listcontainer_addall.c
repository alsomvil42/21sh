/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listcontainer_addall.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 01:52:08 by alsomvil          #+#    #+#             */
/*   Updated: 2019/04/17 23:56:39 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	lstcontainer_addall(t_lstcontainer *dest, t_lstcontainer *cnt)
{
	t_list	*element;

	if (dest == NULL)
		dest = lstcontainer_new();
	element = cnt->firstelement;
	while (element)
	{
		if (dest->firstelement == NULL)
		{
			dest->firstelement = ft_lstnew(element->content);
			dest->lastelement = dest->firstelement;
		}
		else
		{
			dest->lastelement = ft_lstadd(dest->lastelement,
				ft_lstnew(element->content));
		}
		element = element->next;
	}
}
