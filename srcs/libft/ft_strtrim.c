/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 04:57:34 by alsomvil          #+#    #+#             */
/*   Updated: 2019/04/17 23:56:39 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	startws;
	size_t	endws;

	if (s == NULL)
		return (NULL);
	startws = 0;
	endws = 0;
	while (s[startws] == ' ' || s[startws] == '\n' || s[startws] == '\t')
		startws++;
	if (ft_strlen(s) == startws)
		return (ft_strsub(s, 0, 0, 0));
	while (s[ft_strlen(s) - 1 - endws] == ' ' || s[ft_strlen(s) - 1 - endws]
		== '\n' || s[ft_strlen(s) - 1 - endws] == '\t')
		endws++;
	return (ft_strsub(s, startws, ft_strlen(s) - startws - endws, 0));
}
