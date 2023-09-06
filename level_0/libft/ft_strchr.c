/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <vdukhani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:58:33 by vdukhani          #+#    #+#             */
/*   Updated: 2023/09/06 17:17:49 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(char *str, int c)
{
	char	*ch;

	ch = str;
	while (*ch)
	{
		if (*ch == c)
		{
			return (ch);
		}
		ch++;
	}
	return (NULL);
}
