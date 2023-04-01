/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 00:15:33 by taybakan          #+#    #+#             */
/*   Updated: 2023/04/01 03:43:32 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "./lib/libft/libft.h"
# include "./lib/ft_printf/ft_printf.h"

typedef struct s_swap
{
	char	*str;
	char	**numbers;
	int		*s_a;
	int		*s_b;
	int		*sorted;
	int		max_bits;
	int		len_a;
	int		len_b;
}t_swap;

int		ft_check_argv(char **str);
int		ft_combargv(t_swap *data, char **argv, int argc);
int		ft_check_comb(t_swap *data);
int		ft_error(t_swap *data);
void	ft_free(t_swap *data);
void	ft_put_a(t_swap *data);
long	ft_atol(const char *str);
int		ft_checkdup(t_swap *data);
int		radix_sort(t_swap *data);
void	insertion_sort(t_swap *data);
void	ft_stackdup(t_swap *data);
void	ft_getindexed(t_swap *data);
void	ft_getmaxbits(t_swap *data);
int		ft_find(t_swap *data);
void	sort_two(t_swap *data);
void	sort_three(t_swap *data);
void	sort_five(t_swap *data);
void	sa(t_swap *data);
void	sb(t_swap *data);
void	pa(t_swap *data);
void	pb(t_swap *data);
void	ra(t_swap *data);
void	rb(t_swap *data);
void	rr(t_swap *data);
void	rra(t_swap *data);
void	rrb(t_swap *data);
void	rrr(t_swap *data);
void	ft_downone_a(t_swap *data);
void	ft_upone_b(t_swap *data);
void	ft_downone_b(t_swap *data);
void	ft_upone_a(t_swap *data);
void	bit_by_bit(t_swap *data, int j);

#endif
