/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 23:08:34 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/27 00:53:35 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	num_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (i);
}

int	is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	base_check(char *base)
{
	int	j;
	int	k;

	j = 0;
	while (base[j])
	{
		k = j + 1;
		while (base[j] && base[k])
		{
			if (base[j] == base[k] || base[j] == '+' || base[k] == '+'
				|| base[j] == '-' || base[k] == '-')
				return (0);
			k++;
		}
		j++;
	}
	return (1);
}
