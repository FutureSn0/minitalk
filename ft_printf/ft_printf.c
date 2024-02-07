/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:21:55 by aapryce           #+#    #+#             */
/*   Updated: 2023/11/07 14:22:48 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *res)
{
	write (1, &c, 1);
	(*res)++;
}

static void	ft_type(va_list *args, char c, int *i, int *res)
{
	if (c == 'c')
		ft_putchar(va_arg(*args, int), res);
	else if (c == 's')
		ft_printf_str(va_arg(*args, char *), res);
	else if (c == 'p')
		ft_printf_ptr(va_arg(*args, size_t), res);
	else if (c == 'd' || c == 'i')
		ft_printf_nbr(va_arg(*args, int), res);
	else if (c == 'u')
		ft_printf_unbr(va_arg(*args, unsigned int), res);
	else if (c == 'x' || c == 'X')
		ft_printf_hex(va_arg(*args, unsigned int), c, res);
	else if (c == '%')
		ft_putchar('%', res);
	else
		(*i)--;
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		res;
	va_list	args;

	va_start(args, format);
	i = 0;
	res = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			ft_type(&args, format[i], &i, &res);
		}
		else
			ft_putchar((char)format[i], &res);
		i++;
	}
	va_end(args);
	return (res);
}
