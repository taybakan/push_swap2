/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upsanddowns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:42:56 by taybakan          #+#    #+#             */
/*   Updated: 2023/03/31 15:45:37 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void     ft_downone_a(t_swap *data)
{
    int     i;

    i = data->len_a;
    while(i > 0)
    {
        data->s_a[i] = data->s_a[i - 1];
        i--;
    }
}

void    ft_upone_a(t_swap *data)
{
    int     i;

    i = 0;
    while(i < data->len_a - 1)
    {
        data->s_a[i] = data->s_a[i + 1];
        i++;
    }
}

void		ft_downone_b(t_swap *data)
{
	int		i;

	i = data->len_b;
	while(i > 0)
	{
		data->s_b[i] = data->s_b[i - 1];
		i--;
	}
}

void		ft_upone_b(t_swap *data)
{
	int		i;

	i = 0;
	while(i < data->len_b)
    {
        data->s_b[i] = data->s_b[i + 1];
        i++;
    }
}