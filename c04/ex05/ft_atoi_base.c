/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:24:01 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/20 16:24:16 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	num_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (i);
}

int	is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
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
/*
int main()
{
	printf("%i", ft_atoi_base("   -+--80000000z25 ", "0123456789ABCDEF"));
}
*/
