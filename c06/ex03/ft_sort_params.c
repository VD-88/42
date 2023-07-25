/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 22:04:31 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/25 16:09:11 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (argc > 1)
	{
		j = 0;
		while (argv[i][j])
			j++;
		write(1, argv[i], j);
		write(1, "\n", 1);
		i++;
		argc--;
	}
}

void	sorting(int counter, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (counter > 2)
	{
		j = 0;
		while (argv[i][j] || argv[i + 1][j])
		{
			if (argv[i][j] == argv[i + 1][j])
				j++;
			else if (argv[i][j] > argv[i + 1][j])
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				break ;
			}
			else if (argv[i][j] < argv[i + 1][j])
				break ;
		}
		i++;
		counter--;
	}
}

int	main(int argc, char *argv[])
{
	int	k;

	k = 0;
	while (k < argc - 1)
	{
		sorting(argc, argv);
		k++;
	}
	print(argc, argv);
	return (0);
}
