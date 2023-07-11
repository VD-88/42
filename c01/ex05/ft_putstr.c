/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:29:58 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/09 20:54:39 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	cur_char;

	while (*str)
	{
		cur_char = *str;
		write(1, &cur_char, 1);
		str++;
	}
}
/*
int	main()
{	char *p_char;
	char *string = "Hello, World";

	ft_putstr(string);
}
*/
