/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:44:58 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/16 15:23:25 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	l;
	int	length;

	i = 0;
	l = 0;
	length = 0;
	while (to_find[length])
		length++;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			while (to_find[l] == str[i + l] && str[i + l])
			{
				l++;
			}
			if (length == l)
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char str[] = "one, two, 3";
	char to_find[] = "33";
	printf("%s", ft_strstr(str, to_find));
}
*/
