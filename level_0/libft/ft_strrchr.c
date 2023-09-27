/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <vdukhani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:19:45 by vdukhani          #+#    #+#             */
/*   Updated: 2023/09/27 16:04:24 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	while (len >= 0)
	{
		if (*str == c)
		{
			return (str);
		}
		str--;
		len--;
	}
	return (NULL);
}
