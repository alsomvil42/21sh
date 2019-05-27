/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 19:55:14 by alsomvil          #+#    #+#             */
/*   Updated: 2019/04/17 23:56:24 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstadd(t_list *listelement, t_list *newelement)
{
	newelement->index = (listelement->index + 1);
	newelement->prev = listelement;
	newelement->next = NULL;
	listelement->next = newelement;
	return (newelement);
}
