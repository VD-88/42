/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:34:57 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/24 21:49:01 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (argc > 1)
	{
		j = 0;
		while (argv[argc - 1][j])
			j++;
		write(1, argv[argc - 1], j);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
