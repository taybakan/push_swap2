/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:27:35 by taybakan          #+#    #+#             */
/*   Updated: 2023/04/01 03:42:53 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_issorted(t_swap *data)
{
	int	i;

	i = data->len_a - 1;
	while (i > 0)
	{
		if (data->s_a[i] < data->s_a[i - 1])
			return (0);
		i--;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_swap	*data;

	if (argc < 2)
		exit (1);
	data = malloc(sizeof(t_swap));
	ft_check_argv(argv);
	ft_combargv(data, argv, argc);
	ft_put_a(data);
	if (ft_issorted(data))
		return (1);
	insertion_sort(data);
	ft_getindexed(data);
	ft_getmaxbits(data);
	if (data->len_a == 2)
		sort_two(data);
	else if (data->len_a == 3)
		sort_three(data);
	else if (data->len_a == 5)
		sort_five(data);
	else
		radix_sort(data);
	return (0);
}
