/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:17:07 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/26 22:54:06 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	total_length(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (size)
	{
		j = 0;
		while (strs[i][j++])
			len++;
		size--;
		i++;
	}
	j = 0;
	while (sep[j++])
		len++;
	len++;
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

	len = total_length(size, strs, sep);
	strcon = malloc(len * sizeof(char));
	concat(size, strs, strcon, sep);
	return (strcon);
}
/*
int main()
{
	char *strs[] = {"123", "456789", "10/11/12/13/14/15"};
	char sep[] = "+-+";
	printf("%s", ft_strjoin(0, strs, sep));
}
*/
