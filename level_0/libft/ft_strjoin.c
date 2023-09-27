/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <vdukhani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:19:57 by vdukhani          #+#    #+#             */
/*   Updated: 2023/09/27 16:38:17 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*j_str;
	size_t	ind;
	size_t	ind2;

	j_str = malloc(ft_strlen(s2) + ft_strlen(s1)+ 1);
	if (j_str == 0)
		return (NULL);
	ind = 0;
	while (s1[ind])
	{
		j_str[ind] = s1[ind];
		ind++;
	}
	ind2 = 0;
	while (s2[ind2])
	{
		j_str[ind] = s2[ind2];
		ind++;
		ind2++;
	}
	j_str[ind] = 0;
	return (j_str);
}
