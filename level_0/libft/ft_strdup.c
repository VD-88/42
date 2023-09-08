/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <vdukhani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:59:35 by vdukhani          #+#    #+#             */
/*   Updated: 2023/09/08 15:11:25 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_strdup(const char *src)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = malloc(sizeof(char) * ft_strlen(src));
	if (dup == NULL)
		return (0);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}
