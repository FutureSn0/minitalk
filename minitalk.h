/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:35:20 by aapryce           #+#    #+#             */
/*   Updated: 2024/02/10 19:57:50 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <signal.h>
# include <unistd.h>
# include <sys/types.h>

void	ascii_2_bin(const char *str, int pid);
void	send_bin(int bit, int pid);
void	sig_handler(int signum);
void		bin_2_ascii(int bin);

#endif
