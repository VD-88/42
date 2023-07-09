/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:08:34 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/08 23:43:48 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		ascii_number;
	char	letter;

	ascii_number = 122;
	while (ascii_number > 96)
	{
		letter = ascii_number;
		write(1, &letter, 1);
		ascii_number--;
	}
}
