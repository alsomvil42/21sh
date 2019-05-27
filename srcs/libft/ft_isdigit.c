/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 18:05:11 by alsomvil          #+#    #+#             */
/*   Updated: 2019/04/17 23:56:24 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int		ft_isinteg(char *str)
{
	int		i;
	long	n;

	i = 0;
	if (!str)
	{
		ft_putendl("perdu");
		return (1);
	}
	while (str[i])
	{
		if (ft_isdigit(str[i]) != 1 && (str[i] != '+' && str[i] != '-'))
			return (1);
		i++;
	}
	n = ft_atoi_check(str);
	if (n > 2147483647)
		return (1);
	return (0);
}
