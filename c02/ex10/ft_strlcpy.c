/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:25:37 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/12 19:15:33 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (index < size - 1 && src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = 0;
	return (index);
}
/*
int main()
{
	int size = 3;	
	char source[] = "123456789";
	char dest[size];
	printf("%i %s", ft_strlcpy(dest, source, size), dest);
}
*/
