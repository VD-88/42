/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <vdukhani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:14:09 by vdukhani          #+#    #+#             */
/*   Updated: 2023/09/06 16:22:30 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	ind;
	char	*temp;
	char	*temp2;

	temp = dest;
	temp2 = src;
	ind = 0;
	if (src < dest)
	{
		ind = ind + len;
		while (ind >= 0)
		{
			temp[ind] = temp2[ind];
			ind--;
		}
	}
	else
	{
		while (ind < len)
		{
			temp[ind] = temp2[ind];
			ind++;
		}
	}
	return (dest);
}
