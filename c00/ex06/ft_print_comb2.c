/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:44:28 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/08 22:14:08 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(char a[], char b[])
{
	write(1, &a[0], 1);
	write(1, &a[1], 1);
	write(1, " ", 1);
	write(1, &b[0], 1);
	write(1, &b[1], 1);
	if (a[0] != '9' || a[1] != '8' || b[0] != '9' || b[1] != '9')
	{
		write(1, ", ", 2);
	}
}

void	print_numb(char n1[])
{
	char	numb2[2];

	numb2[0] = 47;
	while (numb2[0]++ < 57)
	{
		numb2[1] = 47;
		while (numb2[1]++ < 57)
		{
			if (numb2[0] == n1[0] && numb2[1] > n1[1])
			{
				print_numbers(n1, numb2);
			}
			else if (numb2[0] > n1[0] && numb2[1])
			{
				print_numbers(n1, numb2);
			}
		}
	}
}

void	ft_print_comb2(void)
{
	char	numb1[2];

	numb1[0] = 47;
	while (numb1[0]++ < 57)
	{
		numb1[1] = 47;
		while (numb1[1]++ < 57)
		{
			print_numb(numb1);
		}
	}
}
