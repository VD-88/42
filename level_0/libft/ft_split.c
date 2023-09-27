/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <vdukhani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:29:02 by vdukhani          #+#    #+#             */
/*   Updated: 2023/09/27 16:38:17 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t l);

int	subs_count(char const *s, char c)
{
	int	subs_count;
	int	ind;

	subs_count = 0;
	ind = 0;
	while (s[ind])
	{
		if (s[ind] != c && (s[ind + 1] == c || s[ind + 1] == 0))
			subs_count++;
		ind++;
	}
	return (subs_count);
}

int	sub_len(char const *s, char c)
{
	int	len_count;

	len_count = 0;
	while (*s == c)
		s++;
	while (*s != c && *s)
	{
		len_count++;
		s++;
	}
	return (len_count);
}

char	**ft_split(char const *s, char c)
{
	int		subs_n;
	char	**arr;
	int		size;
	int		i;

	if (s == NULL)
		return (NULL);
	subs_n = subs_count(s, c);
	arr = malloc (sizeof (char *) * (subs_n + 1));
	if (arr == 0)
		return (NULL);
	i = 0;
	arr[subs_n] = NULL;
	while (i < subs_n)
	{
		size = sub_len(s, c);
		while (*s == c)
			s++;
		arr[i] = malloc(size + 1);
		if (arr[i] == NULL)
		{
			while (i-- > 0)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		ft_memcpy(arr[i], s, size);
		arr[i++][size + 1] = 0;
		s += size;
	}
	return (arr);
}
/*
int main()
{
	char *s = "aa111a2222a33aaa";
	char **a = ft_split(s, 'a');
	int i = 0;
	printf("\n");
	while (i < 4)
	{
		printf("%s\n", ft_split(s, 'a')[i]);
		i++;
	}
}
*/