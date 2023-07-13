/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:01:22 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/11 17:25:00 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	index;
	int	result;

	result = 1;
	index = 0;
	while (str[index])
	{
		if ((str[index] >= 'A' && str[index] <= 'Z')
			|| (str[index] >= 'a' && str[index] <= 'z'))
		{
			result = 1;
			index++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
/*
int main()
{
	printf("\n%d", ft_str_is_alpha(""));
}
*/
