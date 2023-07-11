/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:25:23 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/11 12:07:03 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int	*div, int	*mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
		int a = 10;
		int b = 3;
		int res; 
		int res2;
		printf("a=%i, b=%i", a, b);
		ft_div_mod(a, b, &res, &res2);
		printf("div=%d, mod=%d", res, res2);
}
*/
