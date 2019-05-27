/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgetfirst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 04:54:32 by alsomvil          #+#    #+#             */
/*   Updated: 2019/04/17 23:56:39 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstgetfirst(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	if (tmp)
	{
		while (lst->prev)
			lst = lst->prev;
		return (lst);
	}
	return (NULL);
}
