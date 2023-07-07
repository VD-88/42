/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:18:08 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/06 16:07:03 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		ascii_number;
	char	letter;

	ascii_number = 97;
	while (123 > ascii_number)
	{
		letter = ascii_number;
		write(1, &letter, 1);
		ascii_number++;
	}
}
