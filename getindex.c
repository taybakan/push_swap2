/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getindex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:40:06 by taybakan          #+#    #+#             */
/*   Updated: 2023/04/01 03:40:51 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_getmaxbits(t_swap *data)
{
	int	i;
	int	max;

	i = 0;
	max = 0;
	while (i < data->len_a)
	{
		if (data->s_a[i] > max)
		max = data->s_a[i];
		i++;
	}
	i = 0;
	while (max > 1)
	{
		max = max / 2;
		i++;
	}
	data->max_bits = i + 1;
}

void	ft_getindexed(t_swap *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < data->len_a)
	{
		while (data->s_a[i] != data->sorted[j])
			j++;
		if (data->s_a[i] == data->sorted[j])
			data->s_a[i] = j;
		i++;
		j = 0;
	}
}

void	ft_stackdup(t_swap *data)
{
	int	i;

	i = 0;
	data->sorted = malloc(sizeof(int) * data->len_a);
	while (i < data->len_a)
	{
		data->sorted[i] = data->s_a[i];
		i++;
	}
}

void	insertion_sort(t_swap *data)
{
	int	i;
	int	temp;

	i = 0;
	ft_stackdup(data);
	while (i < data->len_a)
	{
		if (i >= 1 && data->sorted[i] < data->sorted[i - 1])
		{
			temp = data->sorted[i - 1];
			data->sorted[i - 1] = data->sorted[i];
			data->sorted[i] = temp;
			i--;
		}
		else
			i++;
	}
}
