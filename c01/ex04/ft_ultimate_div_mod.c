/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:09:40 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/09 19:28:44 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	a_val;
	int	b_val;

	a_val = *a;
	b_val = *b;
	*a = a_val / b_val;
	*b = a_val % b_val;
}

/*int main()
{
	int	a_inp = 80;
	int b_inp = 3;
	write(1, &a_inp, 1);
	write(1, &b_inp, 1);
	ft_ultimate_div_mod(&a_inp, &b_inp);
	write(1, &a_inp, 1);
	write(1, &b_inp, 1);
}
*/
