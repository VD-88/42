/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <vdukhani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:16:03 by vdukhani          #+#    #+#             */
/*   Updated: 2023/09/27 16:38:17 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	len;

	while (ft_strchr(set, *s1))
	{
		s1++;
	}
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len - 1]))
	{
		len--;
	}
	trim = (char *)malloc(sizeof (char) * (len + 1));
	if (trim == NULL)
		return (NULL);
	return (ft_strlcpy(trim, s1, len + 1), trim);
}
