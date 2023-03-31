/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkarg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:07:52 by taybakan          #+#    #+#             */
/*   Updated: 2023/03/28 00:23:18 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_check_argv(char **str)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (str[i])
	{
		while (str[i][j] != '\0')
		{
			if (str[i][j] != '+' && str[i][j] != '-' && str[i][j] != ' '
					&& (!(str[i][j] <= '9' && str[i][j] >= '0')))
					return(ft_error("invalid character"));
			j++;
		}
		j = 0;
		i++;
	}
	return(0);
}

int		ft_check_comb(t_swap *data)
{
	int		i;

	i = 0;
	while (data -> str[i])
	{
		if(data -> str[i] == '+' || data -> str[i] == '-')
		{
			if(!(data -> str[i + 1] <= '9' && data -> str[i + 1] >= '0'))
				return(ft_error("signage error!"));
		}
		i++;
	}
	return (0);
}	

int		ft_combargv(t_swap *data, char **argv, int argc)
{
	int		i;

	i = 2;
	data -> str = ft_strdup(argv[1]);
	while (i < argc)
	{
		data -> str = ft_strjoin(data->str, " ");
		data -> str = ft_strjoin(data->str, argv[i]);
		i++;
	}
	return(ft_check_comb(data));
}

