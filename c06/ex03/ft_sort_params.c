/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 22:04:31 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/24 23:06:46 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	char *temp;
	int	counter;
   
	counter	= argc;
	i = 0;
	j = 0;
	while (argc > 1)
	{
		j = 0;
		while (argv[i][j])
		{	
			if (argv[i][j] == argv[i + 1][j])
				j++;
			else
			{
				if (argv[i][j] < argv[i + 1][j])
				{	
					temp = argv[i];
					argv[i] = argv[i + 1];
					argv[i + 1] = temp;
					break;
				}
				j++;
			}
		}
		i++;
		argc--;
	}
	print(counter, argv);
	return (0);
}
