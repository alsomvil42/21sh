/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsomvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 12:52:33 by alsomvil          #+#    #+#             */
/*   Updated: 2018/10/12 11:17:11 by alsomvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	create_tab_path(t_tab *st_tab, char **env)
{
	char	*str;
	int		i;
	int		j;

	i = -1;
	j = 0;
	while (env[++i])
	{
		str = ft_strndup(env[i], 5);
		if (ft_strcmp(str, "PATH=") == 0)
		{
			free(str);
			st_tab->tab_path = ft_strsplit(&env[i][5], ':');
			while (st_tab->tab_path[j])
			{
				str = ft_strjoin(st_tab->tab_path[j], "/");
				free(st_tab->tab_path[j]);
				st_tab->tab_path[j++] = str;
			}
			return ;
		}
		else
			free(str);
	}
	st_tab->tab_path = NULL;
}

void	recup_argument(t_tab *st_tab, t_env *st_env, char **line)
{
	if (*line && ft_strcmp(*line, "") != 0)
		st_tab->tab_word = ft_strsplit(*line, ' ');
	if (ft_strcmp(*line, "exit") == 0)
	{
		forfree(st_tab->tab_word);
		free(*line);
		exit(0);
	}
}

int		test_exist_fonction_two(t_tab *st_tab, t_env *st_env,
		pid_t father, char *next_str)
{
	int		i;

	i = 0;
	while (st_tab->tab_path && st_tab->tab_path[i])
	{
		next_str = ft_strjoin(st_tab->tab_path[i], st_tab->tab_word[0]);
		if (access(next_str, X_OK) == 0)
		{
			father = fork();
			if (father == 0)
				execve(next_str, st_tab->tab_word, st_env->env);
			free(next_str);
			wait(&father);
			forfree(st_tab->tab_path);
			return (1);
		}
		else
		{
			free(next_str);
			i++;
		}
	}
	return (0);
}

void	test_exist_fonction(t_tab *st_tab, char **line, t_env *st_env)
{
	char	*next_str;
	int		i;
	int		test_proc;
	pid_t	father;

	i = 0;
	if (access(st_tab->tab_word[0], X_OK) == 0)
	{
		father = fork();
		if (father == 0)
			execve(st_tab->tab_word[0], st_tab->tab_word, st_env->env);
		wait(&father);
		return ;
	}
	else
	{
		create_tab_path(st_tab, st_env->env);
		if (test_exist_fonction_two(st_tab, st_env, father, next_str) == 1)
			return ;
		forfree(st_tab->tab_path);
	}
	ft_dprintf(2, "%s%s\n", "minishell: command not found: ",
			st_tab->tab_word[0]);
	return ;
}

#define PO line[i] == '('
#define PF line[i] == ')'
#define GO line[i] == '"'

void	verif_command(char *command)
{

}

void	create_tree(char *command)
{
	//Verification validite commande
	verif_command(command);
	//Verification validite commande
	printf("JUSQUE LA TOUT VA BIEN\n");
}

void	ft_analize(char *line)
{
	int	i;
	int	par;
	int gui;
	char	*test;

	par = 0;
	gui = 0;
	i = 0;
	while (line[i])
	{
		if (line[i] == ';' && par == 0 && gui == 0)
		{
			i++;
			test = ft_strndup(line, i);
			printf("Commande = %s\n", test);
			//Test d'arbre syntaxique
			create_tree(test);
			//Test d'arbre syntaxique
			ft_analize(&line[i]);
			exit (0);
		}
		else if (line[i] == ';' && par == 1 && gui == 0)
		{
			printf("Parenthese non ferme");
			exit (0);
		}
		if (PO && par >= 0)
			par++;
		if (PF && par > 0)
			par--;
		else if (PF && par == 0)
		{
			printf("Mauvaise parenthese fermante\n");
			exit (0);
		}
		if (GO && gui >= 0)
		{
			if (gui % 2 == 0)
				gui++;
			else
				gui--;
		}
		i++;
	}
	if (gui > 0)
	{
		printf("Erreur de guillemets");
		exit (0);
	}
	if (par > 0)
	{
		printf("Parenthese non ferme");
		exit (0);
	}
}

int		main(int argc, char **argv, char **env)
{
	char	*line;
	t_tab	st_tab;
	t_env	st_env;
	pid_t	father;

	line = NULL;
	set_env(&st_env, env);
	while (42)
	{
		ft_dprintf(2, "%s", "%> ");
		if (get_next_line(0, &line) < 1)
			exit(0);
		ft_analize(line);
		if (ft_strcmp(line, "") != 0 && verif_char(line) == 1)
		{
			recup_argument(&st_tab, &st_env, &line);
			if (!check_is_builtins(&st_tab))
				test_exist_fonction(&st_tab, &line, &st_env);
			else if (check_is_builtins(&st_tab))
				realize_built(&st_tab, &st_env, &line, env);
			forfree(st_tab.tab_word);
		}
		free(line);
	}
	forfree(st_env.env);
	return (0);
}
