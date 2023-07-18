/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 21:07:07 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/18 17:43:54 by vdukhani         ###   ########.fr       */
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
	while (dest[i] && i < size)
		i++;
	while (src[l])
		l++;
	if (i == size)
		return (i + l);
	while (src[j] && j < size -1 - i)
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
	char src[] = "456789";
	int a;
	char dest[3] = "123";
	printf("dest=%s ", dest);
	printf("l=%i %s\n", ft_strlcat(dest, src, 3), dest);
}
*/
