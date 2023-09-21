/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <vdukhani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:29:02 by vdukhani          #+#    #+#             */
/*   Updated: 2023/09/21 10:45:27 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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
//printf("subs_n=%d\n", subs_count);	
	return (subs_count);
}

int	sub_len(char *s, char c)
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
	int	subs_n;
	char	**arr;
	int	size;
	int i;
	char *str;
//printf("%d\n", sizeof(char));
	str = s;
	subs_n = subs_count(s, c);
	arr = malloc(sizeof(char*) * (subs_n + 1));
	if (arr == 0)
		return (NULL);
	i = 0;
	//arr[subs_n] = NULL;
	while (i < subs_n)
	{
		size = sub_len(str, c);
//printf("size=%d\n", size);
		while (*str == c)
			str++;
		arr[i] = malloc(size + 1);
//printf("str=%s\n", str);
		ft_memcpy(arr[i], str, size);
		arr[i][size + 1] = 0;
		i++;
		str += size;
	}
	return (arr);
}




/*
int main()
{
	char s[] = "\0\0 1111a22\0 33333a\0";
	char **a = ft_split(s, ' ');
	int i = 0;
	printf("\n");
	while (i < 3)
	{
		printf("%s\n", a[i]);
		i++;
	}
}
*/