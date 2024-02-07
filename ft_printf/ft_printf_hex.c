/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:15:48 by aapryce           #+#    #+#             */
/*   Updated: 2023/10/04 12:15:48 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_hex(unsigned int un, char c, int *res)
{
	char	string[25];
	char	*base_char;
	int		i;

	i = 0;
	if (c == 'X')
		base_char = "0123456789ABCDEF";
	else
		base_char = "0123456789abcdef";
	if (un == 0)
	{
		ft_putchar ('0', res);
		return ;
	}
	while (un > 0)
	{
		string[i++] = base_char[un % 16];
		un /= 16;
	}
	while (i--)
		ft_putchar(string[i], res);
}
