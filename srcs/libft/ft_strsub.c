/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 04:57:22 by alsomvil          #+#    #+#             */
/*   Updated: 2019/04/17 23:56:39 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, size_t start, size_t len, size_t freeit)
{
	char		*new;
	const char	*tmp;

	tmp = s;
	if (!s || !(new = ft_strnew(len)))
		return (NULL);
	while (start--)
		s++;
	ft_strncpy(new, s, len);
	new[len] = '\0';
	if (freeit == 1)
		ft_free((char*)tmp);
	return (new);
}
