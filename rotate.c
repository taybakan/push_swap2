/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:43:42 by taybakan          #+#    #+#             */
/*   Updated: 2023/04/01 03:54:21 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_swap *data)
{
	int	temp;

	temp = data->s_a[0];
	ft_upone_a(data);
	data->s_a[data->len_a - 1] = temp;
	ft_printf("ra\n");
}

void	rb(t_swap *data)
{
	int	temp;

	temp = data->s_b[0];
	ft_upone_b(data);
	data->s_b[data->len_b - 1] = temp;
	ft_printf("rb\n");
}

void	rr(t_swap *data)
{
	int	temp;

	temp = data->s_a[0];
	ft_upone_a(data);
	data->s_a[data->len_a - 1] = temp;
	temp = data->s_b[0];
	ft_upone_b(data);
	data->s_b[data->len_b - 1] = temp;
	ft_printf("rr\n");
}
