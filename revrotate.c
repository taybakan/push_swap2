/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:51:14 by taybakan          #+#    #+#             */
/*   Updated: 2023/04/01 03:53:05 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_swap *data)
{
	int	temp;

	temp = data->s_a[data->len_a - 1];
	ft_downone_a(data);
	data->s_a[0] = temp;
	ft_printf("rra\n");
}

void	rrb(t_swap *data)
{
	int	temp;

	temp = data->s_b[data->len_b - 1];
	ft_downone_b(data);
	data->s_b[0] = temp;
	ft_printf("rrb\n");
}

void	rrr(t_swap *data)
{
	int	temp;

	temp = data->s_a[data->len_a - 1];
	ft_downone_a(data);
	data->s_a[0] = temp;
	temp = data->s_b[data->len_b - 1];
	ft_downone_b(data);
	data->s_b[0] = temp;
	ft_printf("rrr\n");
}
