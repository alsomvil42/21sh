/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listcontainer_size.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 05:29:49 by alsomvil          #+#    #+#             */
/*   Updated: 2019/04/17 23:56:39 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		lstcontainer_size(t_lstcontainer *list_container)
{
	t_list	*lst;
	int		size;

	size = 0;
	if (list_container == NULL)
		return (-1);
	lst = list_container->firstelement;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
