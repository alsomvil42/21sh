/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   environ.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <abe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 02:22:26 by abguimba          #+#    #+#             */
/*   Updated: 2019/04/17 23:52:08 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENVIRON_H
# define ENVIRON_H

int		is_new_value(char *str);
int		is_to_chg_env(char **str);
void	replace_env_set_str(char *s1, char *s2);
void	init_var(char **varname, char **varvalue, char *run_str);
void	end_var(char **varname, char **varvalue);
char	*remove_set_env_string(char *str);
char	*get_set_env_string(char *str);
int		have_envname(char *var);
int		have_setname(char *var);

#endif
