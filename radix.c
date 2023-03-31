/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 03:30:28 by taybakan          #+#    #+#             */
/*   Updated: 2023/03/31 16:20:06 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	change_to_bit(t_swap *data, int j)
{
	if (((data->s_a[0] >> j) & 1) == 0)
		pb(data);
	else
		ra(data);
}

int 	radix_sort(t_swap *data)
{
	int	j;
	int	i;
	int	bit_size;
	int	size;

	i = 0;
	j = 0;
	bit_size = 8;
	while (j < bit_size)
	{
		i = 0;
		size = data->len_a;
		while (i < size)
		{
			change_to_bit(data, j);
			i++;
		}
		while (data->len_b != 0)
			pa(data);
		j++;
	}
    return (0);
}