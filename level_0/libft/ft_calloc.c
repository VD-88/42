/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <vdukhani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:59:30 by vdukhani          #+#    #+#             */
/*   Updated: 2023/09/08 13:58:51 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t n_elem, size_t elem_size)
{
	char	*ptr;
	size_t	len;

	len = n_elem * elem_size;
	ptr = malloc(len);
	if (ptr != 0)
	{
		while (len)
		{
			ptr[len - 1] = 0;
			len--;
		}
	}
	return (ptr);
}
