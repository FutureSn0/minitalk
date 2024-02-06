/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:27:01 by aapryce           #+#    #+#             */
/*   Updated: 2024/02/06 15:16:57 by aapryce          ###   ########.fr       */
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


	len = strlen(str);
	i = 0;
	while (i < len)
	{
		c = str[i];
		while (j >= 0)
		{
			(c >> j) & 1;
		}
		j--;
	}
	i++;

}

int	main()
{
	
}
