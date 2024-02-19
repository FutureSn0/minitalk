/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <aapryce@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:05:52 by aapryce           #+#    #+#             */
/*   Updated: 2024/02/19 13:02:37 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	g_confirm = 0;

void	confirmation(int signum)
{
	(void)signum;
	g_confirm = 1;
}

void	send_bin(int bit, int pid)
{
	if (bit == 1)
	{
		if (kill (pid, SIGUSR1) == -1)
		{
			ft_printf("Error\n");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (kill (pid, SIGUSR2) == -1)
		{
			ft_printf("Error\n");
			exit(EXIT_FAILURE);
		}
	}
	while (!g_confirm)
		pause();
	g_confirm = 0;
}

void	ascii_2_bin(const char *str, int pid)
{
	int				i;
	int				j;
	int				len;
	unsigned char	c;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		c = str[i];
		j = 7;
		while (j >= 0)
		{
			send_bin((c >> j) & 1, pid);
			usleep(800);
			j--;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid;

	signal(SIGUSR2, confirmation);
	if (argc != 3 || !argv[2])
	{
		ft_printf("Usage: %s <Server PID> <string>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	pid = ft_atoi(argv[1]);
	if (pid <= 0)
	{
		ft_printf("Invalid PID\n");
		exit(EXIT_FAILURE);
	}
	signal(SIGUSR1, confirmation);
	ascii_2_bin(argv[2], pid);
	return (0);
}
