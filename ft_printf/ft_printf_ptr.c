/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:43:16 by aapryce           #+#    #+#             */
/*   Updated: 2023/09/18 12:28:38 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_ptr(size_t ptr, int *res)
{
	char	string[25];
	char	*base;
	int		i;

	i = 0;
	base = "0123456789abcdef";
	write (1, "0x", 2);
	(*res) += 2;
	if (ptr == 0)
	{
		ft_putchar('0', res);
		return ;
	}
	while (ptr != 0)
	{
		string[i++] = base[ptr % 16];
		ptr /= 16;
	}
	while (i--)
		ft_putchar(string[i], res);
}
