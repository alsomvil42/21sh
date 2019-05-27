/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listcontainer_addelement.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 01:52:15 by alsomvil          #+#    #+#             */
/*   Updated: 2019/04/17 23:56:39 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	lstcontainer_add(t_lstcontainer *container, void *content)
{
	if (container == NULL)
		container = lstcontainer_new();
	if (container->firstelement == NULL)
	{
		container->firstelement = ft_lstnew(content);
		container->lastelement = container->firstelement;
	}
	else
		container->lastelement = ft_lstadd(container->lastelement,
			ft_lstnew(content));
}
