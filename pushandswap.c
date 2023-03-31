/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushandswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:18:08 by taybakan          #+#    #+#             */
/*   Updated: 2023/03/31 15:46:43 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(t_swap *data)
{
    int     temp;

    temp = data->s_a[0];
    data->s_a[0] = data->s_a[1];
    data->s_a[1] = temp;
    ft_printf("sa\n");
}

void    sb(t_swap *data)
{
    int     temp;

    temp = data->s_b[0];
    data->s_b[0] = data->s_b[1];
    data->s_b[1] = temp;
    ft_printf("sb\n");
}

void    ss(t_swap *data)
{
    int     temp;

    temp = data->s_a[0];
    data->s_a[0] = data->s_a[1];
    data->s_a[1] = temp;
    temp = data->s_b[0];
    data->s_b[0] = data->s_b[1];
    data->s_b[1] = temp;
    ft_printf("ss\n");
}

void    pa(t_swap *data)
{
    ft_downone_a(data);
    data->len_a++;
    data->s_a[0] = data->s_b[0];
    ft_upone_b(data);
    data->len_b--;
    ft_printf("pa\n");
}

void    pb(t_swap *data)
{
    ft_downone_b(data);
    data->len_b++;
    data->s_b[0] = data->s_a[0];
    ft_upone_a(data);
    data->len_a--;
    ft_printf("pb\n");
}