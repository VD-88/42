/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:45:36 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/12 21:26:43 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_to_hex(char c)
{
	char	hex[2];
	int		i;

	i = 0;
	write(1, "/0", 2);
	while (c)
	{	
		hex[i] = c % 16;
		if (hex[i] > 9)
		{
			hex[i] += 87;
		}
		else
		{
			hex[i] += 48;
		}	
		c = c / 16;
		i++;
	}
	while (i >= 0)
	{
		write(1, &hex[i], 1);
		i--;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] < ' ' || str[index] > '~')
		{
			ft_to_hex(str[index]);
		}
		else
		{
			write(1, &str[index], 1);
		}
		index++;
	}
}
/*
int main()
{
	char i[] = "Coucou\ntu vas bien ?" ;
	ft_putstr_non_printable(i);
}
*/
