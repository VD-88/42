/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:25:48 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/11 17:46:19 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	index;
	int	result;

	index = 0;
	result = 1;
	while (str[index])
	{
		if (str[index] < '0' || str[index] > '9')
		{
			result = 0;
			return (result);
		}
		index++;
	}
	return (result);
}
/*
int main()
{
	printf("\n%d", ft_str_is_numeric("123"));

}
*/
