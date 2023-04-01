/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 03:30:28 by taybakan          #+#    #+#             */
/*   Updated: 2023/04/01 03:51:51 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bit_by_bit(t_swap *data, int j)
{
	if (((data->s_a[0] >> j) & 1) == 0)
		pb(data);
	else
		ra(data);
}

int	radix_sort(t_swap *data)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (j < data->max_bits)
	{
		i = data->len_a;
		while (i > 0)
		{
			bit_by_bit(data, j);
			i--;
		}
		while (data->len_b > 0)
			pa(data);
		j++;
	}
	return (0);
}
