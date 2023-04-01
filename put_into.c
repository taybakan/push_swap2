/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_into.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 00:10:34 by taybakan          #+#    #+#             */
/*   Updated: 2023/04/01 03:51:03 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checkdup(t_swap *data)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	while (i < data->len_a)
	{
		k = data->s_a[i];
		j = 0;
		while (j < data->len_a)
		{
			l = data->s_a[j];
			if ((k == l) && (j != i))
				return (ft_error(data));
			j++;
		}
		i++;
	}
	return (0);
}

long	ft_atol(const char *str)
{
	int		c;
	int		s;
	long	res;

	c = 0;
	s = 1;
	res = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	if (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (str[c] - '0') + (res * 10);
		c++;
	}
	return (res * s);
}

void	ft_put_a(t_swap *data)
{
	int		i;
	long	l;

	i = 0;
	data->numbers = ft_split(data->str, ' ');
	while (data->numbers[i])
		i++;
	data->len_a = i;
	data->len_b = 0;
	data->s_a = malloc(sizeof(int) * (i + 1));
	data->s_b = malloc(sizeof(int) * (i + 1));
	i = -1;
	while (data->numbers[++i])
	{
		l = ft_atol(data->numbers[i]);
		if (l > 2147483647 || l < -2147483648)
			ft_error(data);
		data->s_a[i] = l;
	}
	i = -1;
	while (data->numbers[++i])
		free(data->numbers[i]);
	ft_checkdup(data);
}
