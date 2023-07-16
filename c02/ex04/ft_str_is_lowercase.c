/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:48:05 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/11 17:53:25 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] < 'a' || str[index] > 'z')
		{
			return (0);
		}
		index++;
	}
	return (1);
}
/*
int	main()
{
	printf("%i", ft_str_is_lowercase(""));
}
*/
