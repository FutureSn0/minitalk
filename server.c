/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <aapryce@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:27:01 by aapryce           #+#    #+#             */
/*   Updated: 2024/02/12 13:20:22 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	bin_2_ascii(int bit)
{
	static int		i;
	static char		c;

	i = 0;
	c = 0;
	c = (c << 1) | bit;
	i++;
	if (i == 8)
	{
		ft_printf("%c", c);
		i = 0;
		c = 0;
	}
}

void	sig_handler(int signum)
{
	if (signum == SIGUSR1)
		bin_2_ascii(1);
	else if (signum == SIGUSR2)
		bin_2_ascii(0);
}

int	main(void)
{
	ft_printf("Server PID: %d\n", getpid());
	signal(SIGUSR1, sig_handler);
	signal(SIGUSR2, sig_handler);
	while (1)
		pause();
	return (0);
}
