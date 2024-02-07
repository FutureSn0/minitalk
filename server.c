/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <aapryce@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:27:01 by aapryce           #+#    #+#             */
/*   Updated: 2024/02/07 16:06:46 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ascii_2_bin(const char *str)
{
	int	i;
	int	j;
	int	len;
	int	res;
	unsigned char	c;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		c = str[i];
		j = 7;
		while (j >= 0)
		{
			ft_printf("%d", (c >> j) & 1);
			j--;
		}
		ft_printf(" ");
		i++;
	}
	ft_printf("\n");
}

int	main(void)
{
	char	*str;

	str = "Trance";
	ascii_2_bin(str);
	return(0);
}
