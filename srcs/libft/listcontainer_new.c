/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listcontainer_new.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 05:32:52 by alsomvil          #+#    #+#             */
/*   Updated: 2019/04/17 23:56:39 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lstcontainer	*lstcontainer_new(void)
{
	t_lstcontainer	*newcontainer;

	newcontainer = ft_malloc(sizeof(t_lstcontainer));
	newcontainer->add = lstcontainer_add;
	newcontainer->remove = lstcontainer_remove;
	newcontainer->size = lstcontainer_size;
	newcontainer->fastsize = lstcontainer_fastsize;
	newcontainer->reindex = lstcontainer_reindex;
	newcontainer->firstelement = NULL;
	newcontainer->lastelement = NULL;
	return (newcontainer);
}
