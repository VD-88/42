/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:04:40 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/24 18:56:51 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	long int	i;

	i = 3;
	if (nb <= 1)
		return (2);
	if (nb == 2)
		return (nb);
	if (nb % 2 == 0)
		return (ft_find_next_prime(nb + 1));
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (ft_find_next_prime(nb + 1));
		i += 2;
	}
	return (nb);
}
/*
int main()
{
	printf("%d", ft_find_next_prime(4));
}
*/
