/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:03:34 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/25 19:55:34 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	j;

	if (min >= max)
	{
		range = NULL;
		return (range);
	}
	i = min;
	j = 0;
	range = malloc(sizeof(int) * (max - min));
	i = min ;
	while (i < max)
	{
		range[j] = i;
		i++;
		j++;
	}
	return (range);
}
/*
int main()
{
	int i = 0;
	while (i < 1)
	{
		printf("%i ", (ft_range(0, 0)[i++]));
	}
}
*/
