/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 22:07:06 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/12 18:12:27 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 1;
	if (str[index - 1] >= 'a' && str[index - 1] <= 'z')
	{
		str[index - 1] -= 32;
	}
	while (str[index])
	{
		if (str[index - 1] < '0' && str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}
		if (str[index - 1] > '0' && str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] += 32;
		}
		index++;
	}
	return (str);
}
/*
int main()
{
	char source[] = "saLut, COMMENT tu vas ? 42skdjnGF!this+is+fiNe";
	ft_strcapitalize(source);
	printf("%s", source);
}
*/
