/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:33:57 by aapryce           #+#    #+#             */
/*   Updated: 2023/09/18 12:31:40 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

//SRCS//

void	ft_putchar(char c, int *res);
void	ft_printf_str(char *str, int *res);
void	ft_printf_nbr(int n, int *res);
void	ft_printf_unbr(unsigned int un, int *res);
void	ft_printf_ptr(size_t ptr, int *res);
void	ft_printf_hex(unsigned int un, char c, int *res);
int		ft_printf(const char *format, ...);

#endif
