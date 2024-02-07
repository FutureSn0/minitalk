/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:42:40 by aapryce           #+#    #+#             */
/*   Updated: 2023/10/04 11:01:32 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_nbr(int n, int *res)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*res += 11;
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', res);
		ft_printf_nbr(n *(-1), res);
	}
	else
	{
		if (n > 9)
			ft_printf_nbr(n / 10, res);
		ft_putchar(n % 10 + '0', res);
	}
}

void	ft_printf_unbr(unsigned int un, int *res)
{
	if (un >= 10)
		ft_printf_unbr(un / 10, res);
	ft_putchar(un % 10 + '0', res);
}
