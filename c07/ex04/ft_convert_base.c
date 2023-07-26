/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 22:58:38 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/27 01:07:09 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	num_in_base(char c, char *base);
int	is_in_base(char c, char *base);
int	base_len(char *base);
int	base_check(char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	numb;

	sign = 1;
	i = 0;
	numb = 0;
	if (base_check(base))
	{
		while (str[i] < '!')
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i++] == '-')
				sign *= -1;
		}
		while (is_in_base(str[i], base))
		{
			numb = numb * base_len(base) + num_in_base(str[i++], base);
			if (!(is_in_base(str[i], base)))
				return (numb * sign);
		}
		return (0);
	}
	return (0);
}

int	string_length(int number, int base_length)
{
	int	len;

	len = 0;
	if (number < 0)
	{
		len = 1;
	}
	while (number)
	{
		number /= base_length;
		len++;
	}
	return (len);
}

char	*from_int_to_base(int number, char *base_to, int base_len, int str_len)
{
	int			i;
	long int	numb;
	char		*number_to_return;

	i = 0;
	if (number < 0)
		numb = -number;
	else
		numb = number;
	if (base_check(base_to))
	{
		number_to_return = malloc(str_len * sizeof(char) + 1);
		number_to_return[str_len] = 0;
		str_len--;
		while (str_len >= 0)
		{
			number_to_return[str_len] = base_to[numb % base_len];
			numb /= base_len;
			str_len--;
		}
		if (number < 0)
			number_to_return[0] = '-';
	}
	return (number_to_return);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*number_to_return;
	int		b_len;
	int		str_len;

	if (base_check(base_to) == 0 || base_check(base_from) == 0)
		return (NULL);
	if (base_len(base_to) < 2 || base_len(base_from) < 2)
		return (NULL);
	number = ft_atoi_base(nbr, base_from);
	b_len = base_len(base_to);
	str_len = string_length(number, b_len);
	number_to_return = from_int_to_base(number, base_to, b_len, str_len);
	return (number_to_return);
}
/*
int main()
{
	printf("%s" ,ft_convert_base("-+--+2147483647", "0123456789", "01"));
}
*/
