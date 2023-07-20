/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 21:50:49 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/20 14:21:41 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		i;
	char	num[11];
	int		sign;

	i = 0;
	sign = 1;
	if (nb < 0)
	{
		write(1, "-", 1);
		sign *= -1;
	}
	if (nb == 0)
		write(1, "0", 1);
	while (nb)
	{
		num[i] = (nb % 10) * sign + 48;
		nb /= 10;
		i++;
	}
	while (--i >= 0)
	{
		write(1, &num[i], 1);
	}
}
/*
int main()
{
	ft_putnbr(2147483647);
}
*/
