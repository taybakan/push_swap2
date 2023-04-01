/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:29:05 by taybakan          #+#    #+#             */
/*   Updated: 2023/04/01 03:54:36 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find(t_swap *data)
{
	int	i;

	i = 0;
	while (data->len_a > i)
	{
		if (data->s_a[i] == 0 || data->s_a[i] == 1)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

void	sort_five(t_swap *data)
{
	while (ft_find(data) != -1)
	{
		if (ft_find(data) == 0)
		{
			pb(data);
		}
		else
			ra(data);
	}
	if (data->s_a[0] == 4)
		ra(data);
	if (data->s_a[1] == 4)
		rra(data);
	if (data->s_a[0] == 3)
		sa(data);
	pa(data);
	pa(data);
	if (data->s_a[0] == 1)
		sa(data);
}

void	sort_three(t_swap *data)
{
	if (data->s_a[0] == 2)
		ra(data);
	if (data->s_a[1] == 2)
		rra(data);
	if (data->s_a[0] == 1)
		sa(data);
}

void	sort_two(t_swap *data)
{
	if (data->s_a[0] == 1)
		sa(data);
}
