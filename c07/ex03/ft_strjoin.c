/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:17:07 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/27 03:53:35 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	total_length(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;
	int	sep_len;
	int	count;

	i = 0;
	len = 0;
	sep_len = 0;
	count = size;
	while (count)
	{
		j = 0;
		while (strs[i][j++])
			len++;
		count--;
		i++;
	}
	j = 0;
	while (sep[j++])
		sep_len++;
	len += sep_len * (size - 1) + 1;
	return (len);
}

char	*concat(int size, char **strs, char *strcon, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (size > 0)
	{
		k = 0;
		while (strs[i][k])
			strcon[j++] = strs[i][k++];
		if (size > 1)
		{
			k = 0;
			while (sep[k])
				strcon[j++] = sep[k++];
		}
		i++;
		size--;
	}
	strcon[j] = 0;
	return (strcon);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strcon;
	int		len;

	if (size <= 0)
	{
		strcon = (char *)malloc(1);
		strcon[0] = 0;
		return (strcon);
	}
	len = total_length(size, strs, sep);
	strcon = (char *)malloc(len * sizeof(char));
	if (strcon == 0)
		return (0);
	concat(size, strs, strcon, sep);
	return (strcon);
}
/*
int main()
{
	char *strs[] = {"123", "456789", "10/11/12/13/14/15"};
	char sep[] = "+-+";
	//char test[] = {0};
	printf("%s", ft_strjoin(3, strs, sep));
}
*/
