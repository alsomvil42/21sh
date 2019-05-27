/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 14:04:25 by alsomvil          #+#    #+#             */
/*   Updated: 2019/04/17 23:56:39 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	c2;

	i = 0;
	c2 = (unsigned char)c;
	str = (unsigned char*)src;
	while (i < n)
	{
		((unsigned char*)dest)[i] = str[i];
		if (str[i] == c2)
		{
			i++;
			return (dest + i);
		}
		i++;
	}
	return (NULL);
}
