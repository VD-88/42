/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_creation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:54:27 by vdukhani          #+#    #+#             */
/*   Updated: 2023/07/22 22:14:23 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

struct dict
{
	unsigned long	key;
	char *value;
};


void dict_create(struct dict *array)
{
	int	i;
	int j;
	
	i = 0;
	j = -1;
	while (i < 32)
	{
		if (j < 20)
		{
			j++;
			array[i].key = j;
						
		}
		else if (j < 100)
		{
			j+= 10;
			array[i].key = j;
		}
		else if (j < 1000)
		{
			j*= 10;
			array[i].key = j;
		}
		else if (j < 1000000000)
		{
			j*= 1000;
			array[i].key = j;
		}
		i++;
	}
}


int	line_length(int *line, int *not_end)
{	
	int	length;
	int	file;
	char	c;
	int	line_count;
		
	length = 0;
	line_count = 0;
	file = open("numbers.dict", O_RDONLY);
	while (line_count != *line + 1)
	{
		*not_end = read(file, &c, 1);
		if (c == '\n')
		line_count++;
		if (line_count == *line)
			length++;
	}
	if (line_count == 1)
		length++;
	*line = line_count;
	close(file);
	return (length);
}


void copy_to_temp(char *temp, int line)
{
	int	i;
	int	file;
	char	c;
	int	line_count;
	int	read_bytes;
		
	i = 0;
	line_count = 0;
	file = open("numbers.dict", O_RDONLY);
	while (line_count != line)
	{
		read_bytes = read(file, &c, 1);
		if (line_count == line - 1 && c != '\n')
		{
			temp[i] = c;
			i++;
		}
		if (c == '\n')
		line_count++;
	}
	temp[i] = 0;
	close(file);
}


void	check_temp_for_key(char *temp, struct dict *dict)
{
	int	str_key;
	int	i;
	int	j;
	int	k;
	int	num;
	int	start_of_value;
	
	i = 0;
	j = 0;
	k = 0;
	num = 0;
	start_of_value = 0;
	while (temp[i])
	{
		if (temp[i] == ' ' || temp[i] == ':')
			break;
		if (temp[i] >= '0' && temp[i] <= '9')
			num = num * 10 + temp[i] - '0';
		i++;
	}
	str_key = num; //need doublecheck for possible mistakes
	i = 0;
	while (j < 32)
	{
		if (str_key == dict[j].key) //checking if dict key match key in the temp
		{
			dict[j].value = (char *)malloc(sizeof(char) * 50);
			k = 0;
			i = 0;
			start_of_value = 0;
			while (temp[i]) //copy str value to dict value
			{
				if (temp[i] == ':')
					start_of_value = 1;
				if (start_of_value && (temp[i] != ' ' && temp[i] != ':'))
				{
					dict[j].value[k] = temp[i];
					k++;
				}
				i++;
			}
			if (temp[i] == 0)
			{
				dict[j].value[k] = 0; //put end of line
			}
			break;
		}
		j++;
	}
}
		
			
void dict_values(struct dict *array)
{
	int	len;
	int	line;
	int 	not_end;
		
	not_end = 1;
	line = 0;
	while (not_end) //condition of the end of the file
	{
		len = line_length(&line, &not_end); //defining length of the line
		char temp[len]; //creation temp str of length to copy line into
		if (not_end)
		{
			copy_to_temp(temp, line);
			check_temp_for_key(temp, array);
		}	
	}
	
}


void	print_num(int	numb, struct dict *arr, int c)
{
	int j;
	int i;
	
	j = 0;
	i = 0;
	while (j < 32)
	{
		if (numb == arr[j].key)
		{
			if (c > 0)
				write(1, " ", 1);
			while (arr[j].value[i])
			{
				write(1, &arr[j].value[i], 1);
				i++;
			}
			break;
		}
		j++;
	}
}


void	input_parse(char *input, struct dict *array)
{
	int 	i;
	int	j;
	int	k;
	int	koef;
	int	numb;
	int	digit;
	int	c;
	
	i = 1;
	j = 0;
	k = 0;
	koef = 1;
	c = 0;
	while (input[k])
		k++;
	while (input[j])
	{
		i = 1;
		koef = 1;
		while (i < k)
		{
			koef = koef * 10;
			i++;
		}
		numb = (input[j] - '0') * koef;
		if (numb == 0)
		{
			j++;
			k--;
			continue;
		}
		if (numb < 10)
			numb = numb;
		else if (numb < 20)
		{
			numb += input[j+1] - '0';
			j++;
		}
		else if (numb < 100)
			numb = numb;
		else if (numb > 99)
		{
			digit = numb / koef;
			print_num(digit, array, c);
			numb = numb / (input[j] - '0');
			c++;
		}
		
		print_num(numb, array, c);
		c++;
		j++;
		k--;
	}
}


int main(int argc, char *argv[])
{
	int ind = 0;
	char *temp;
	char *input;
	char *path;
	int	i;
	
	input = argv[1];
	i = 0;
	/*if (argc == 2)
	{
		while (argv[1][i])
		{
			input[i] = argv[1][i];
			i++;
		}
		i = 0;
		path = "numbers.dict";
	}
	else if (argc == 3)
		while(argv[1][i])
		{
			path[i] = argv[1][i];
			i++;
		}
		path[i] = 0;*/
	struct dict *ar = malloc(sizeof(struct dict) * 32);
	dict_create(ar);
	dict_values(ar);
	input_parse(input, ar);
	while (ind < 32)
	{
	ind++;
	}
}

