/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <vdukhani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:55:46 by vdukhani          #+#    #+#             */
/*   Updated: 2023/09/21 12:20:14 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t l)
{
	char	*temp;
	char	*temp2;

	temp = dest;
	temp2 = (char *)src;
	while (l)
	{
		*temp = *temp2;
		temp++;
		temp2++;
		l--;
	}
	return (dest);
}
