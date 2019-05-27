/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   restore_env.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 03:32:10 by alsomvil          #+#    #+#             */
/*   Updated: 2019/04/17 23:56:24 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh21.h"

void	*m_malloc(int i)
{
	void	*ptr;

	ptr = ft_malloc(sizeof(i));
	if (ptr == NULL)
	{
		ft_putendl("Failed to allocate memory");
		ft_exit2(EXIT_FAILURE);
	}
	return (ptr);
}

void	restore_env(void)
{
	free_keyval(g_tracking.mysh->env);
	g_tracking.mysh->env = ft_env_to_lst(g_tracking.mysh->tab_env);
}
