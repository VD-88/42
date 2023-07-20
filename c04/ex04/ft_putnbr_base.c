/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/-119 18:14:48 by vdukhani          #+#    #+#           */
/*   Updated: 2023/07/19 23:17:16 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void	print(int number, char *base, int base_len)
{
	int	digit;
	int	sign;

	sign = 1;
	if (number < 0)
		sign = -1;
	if (number == 0)
		return ;
	digit = number % base_len * sign;
	print(number / base_len, base, base_len);
	write(1, &base[digit], 1);
}

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	base_check(char *base)
{
	int	j;
	int	k;

	j = 0;
	while (base[j])
	{
		k = j + 1;
		while (base[j] && base[k])
		{
			if (base[j] == base[k] || base[j] == '+' || base[k] == '+'
				|| base[j] == '-' || base[k] == '-')
				return (0);
			k++;
		}
		j++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	sign;
	int	base_l;
	int	base_check_res;

	base_l = base_len(base);
	base_check_res = base_check(base);
	sign = 1;
	if (base_check_res)
	{
		if (nbr < 0)
			write(1, "-", 1);
		if (nbr == 0)
			write(1, "0", 1);
		if (base_check_res && base_l > 1)
		{
			print(nbr, base, base_l);
		}
	}
	else
		return ;
}
/*
int main()
{
	ft_putnbr_base(INT_MIN, "0123456789");
	
}
*/
