/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:45:36 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/11 11:56:59 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int main()
{
	int	a_num = 55;
	int b_num = 56;
	printf("a=%d, b=%d", a_num, b_num);
	ft_swap(&a_num, &b_num);
	printf("a=%d, b=%d", a_num, b_num);
}
*/
