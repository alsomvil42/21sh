/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listcontainer_fastsize.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 05:29:49 by alsomvil          #+#    #+#             */
/*   Updated: 2019/04/17 23:56:39 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		lstcontainer_fastsize(t_lstcontainer *container)
{
	return (container->lastelement->index + 1);
}
