/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:57:15 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/11 12:39:59 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	index;

	index = 0;
	size--;
	while (index < size)
	{
		temp = tab[index];
		tab[index] = tab[size];
		tab[size] = temp;
		index++;
		size--;
	}
}
/*
int main()
{
	int i = 0;
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	ft_rev_int_tab(a, 10);
	while (i < 10)
	{
		printf("%d", a[i]);
		i++;
	}
}
*/
