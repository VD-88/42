/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <vdukhani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:56:10 by vdukhani          #+#    #+#             */
/*   Updated: 2023/09/06 20:06:26 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const char *ptr1, const char *ptr2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (ptr1[i] > ptr2[i])
			return (1);
		if (ptr1[i] < ptr2[i])
			return (-1);
		if (ptr1[i] == ptr2[i])
			i++;
	}
	return (0);
}
