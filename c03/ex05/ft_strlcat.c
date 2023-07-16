/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 21:07:07 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/16 15:28:10 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l;

	i = 0;
	j = 0;
	l = 0;
	while (dest[i])
		i++;
	while (src[l])
		l++;
	while (src[j] && j < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (i + l);
}
/*
int main()
{
	char src[] = "6789";
	char dest[] = "12345";
	printf("l=%i %s", ft_strlcat(dest, src, 0), dest);
}
*/
