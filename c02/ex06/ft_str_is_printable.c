/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:07:32 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/12 17:13:27 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] < 32 || str[index] > '~')
		{
			return (0);
		}
		index++;
	}
	return (1);
}
/*
int main()
{
	char test[6] = {'a', '~', '5', ' ', '3'};
	//ft_str_is_printable(test);
	printf("%d", ft_str_is_printable(test));
}
*/
