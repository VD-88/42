/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:16:54 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/25 18:01:37 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc(sizeof(src));
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}
/*
int main()
{
	printf("%s", ft_strdup("123456789"));
}
*/
