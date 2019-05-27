/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 05:38:49 by alsomvil          #+#    #+#             */
/*   Updated: 2019/04/17 23:56:39 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split_white(char *str)
{
	char	**tab;
	char	*newstr;
	int		i;

	tab = ft_strsplit(str, '\t');
	i = 0;
	newstr = ft_strnew(0);
	while (tab[i])
	{
		newstr = ft_strjoinfree(newstr, tab[i], 1);
		newstr = ft_strjoinfree(newstr, " ", 1);
		i++;
	}
	i = 0;
	free_tab(tab);
	tab = ft_strsplit(newstr, ' ');
	ft_free(newstr);
	return (tab);
}
