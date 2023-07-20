/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 22:27:54 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/20 14:12:33 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	numb;

	i = 0;
	sign = 1;
	numb = 0;
	while (str[i] < '!')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numb = numb * 10 + (str[i] - 48);
		i++;
		if (str[i] < '0' || str[i] > '9')
		{
			return (numb * sign);
		}
	}
	return (0);
}
/*
int main()
{
	char str[] = " --+-2147483648ab24";
	printf("%d\n", ft_atoi(str));
}
*/
