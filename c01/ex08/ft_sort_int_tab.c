/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:13:09 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/10 21:59:07 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	temp1;
	int	temp2;
	int	iter;

	iter = 0;
	while (iter++ < size - 1)
	{
		index = 0;
		while (index++ < size - 1)
		{
			temp1 = *tab;
			tab++;
			if (*tab < temp1)
			{
				temp2 = *tab;
				tab--;
				*tab = temp2;
				tab++;
				*tab = temp1;
			}
		}
		tab = tab - size + 1;
	}
}
/*
int main()
{
	int array[] = {3, 1, 2, 4, 8, 5, 3};
	int i = 0;

	ft_sort_int_tab(array, 7);
	while (i < 7)
	{
		//printf("%d", i);
		printf("%d", array[i]);
		i++;
	}
}*/
