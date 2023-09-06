/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <vdukhani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:47:12 by vdukhani          #+#    #+#             */
/*   Updated: 2023/09/06 19:55:40 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(void *buf, int ch, size_t length)
{
	size_t	i;
	char	*c;

	c = buf;
	i = 0;
	if (length == 0)
		return (NULL);
	while (*c && i < length)
	{
		if (*c == ch)
			return (c);
		c++;
		i++;
	}
	return (NULL);
}
