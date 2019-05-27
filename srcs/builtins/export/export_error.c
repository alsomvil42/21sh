/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 15:27:51 by abguimba          #+#    #+#             */
/*   Updated: 2019/04/17 23:52:31 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "sh21.h"

int		export_error(char *error)
{
	ft_putstr_fd(SHELL_NAME": export: `", 2);
	ft_putstr_fd(error, 2);
	ft_putendl_fd("': not a valid identifier", 2);
	return (1);
}
