/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:55:23 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/12 17:20:53 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (src[index] && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	while (index <= n)
	{
		dest[index] = 0;
		index++;
	}
	return (dest);
}
/*
int main()
{
	unsigned int size = 5;
	char source[] = "123456789-10-11-12-13-14-15-16-17-18-19";
	char destination[size];

	ft_strncpy(destination, source, size);
	printf("source=%s, dest=%s", source, destination);
	printf("over-%c", destination[59]);
}
*/
