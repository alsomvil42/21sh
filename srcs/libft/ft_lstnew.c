/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 20:10:57 by alsomvil          #+#    #+#             */
/*   Updated: 2019/04/17 23:56:39 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content)
{
	t_list		*liste;

	if ((liste = ft_malloc(sizeof(t_list))) == NULL)
		return (NULL);
	liste->prev = NULL;
	liste->next = NULL;
	liste->index = 0;
	if (content == NULL)
	{
		liste->content = NULL;
		return (liste);
	}
	liste->content = (void *)content;
	return (liste);
}
