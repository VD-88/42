/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:55:47 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/11 12:20:49 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		str++;
		counter++;
	}
	return (counter);
}
/*
int main()
{
	printf("str len=%d", ft_strlen("Hello, world"));
}
*/
