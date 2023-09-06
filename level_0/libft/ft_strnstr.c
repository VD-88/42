/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <vdukhani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:07:29 by vdukhani          #+#    #+#             */
/*   Updated: 2023/09/06 20:33:28 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l;
	size_t	length;

	i = 0;
	l = 0;
	length = 0;
	if (little[i] == 0)
		return (&big[i]);
	while (little[length])
		length++;
	while (big[i])
	{
		if (big[i] == little[0])
		{
			while (little[l] == big[i + l] && big[i + l] && i + l <= len - 1)
			{
				l++;
			}
			if (length == l)
				return (&big[i]);
		}
		i++;
	}
	return (NULL);
}
