/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <aapryce@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:27:01 by aapryce           #+#    #+#             */
/*   Updated: 2024/02/08 16:08:58 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	bin_2_ascii(int bin)
{

}

void	sig_handler(int signum)
{
	if (signum == SIGUSR1)
	else if (signum == SIGUSR2)
}

int	main(void)
{
	struct sigaction	sa;
	
	ft_printf("Server PID: %d\n", getpid());
	
	/*sa.sa_handler = sig_handler;*/
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	
	return (0);
}
