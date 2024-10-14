/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:33:26 by pmoreira          #+#    #+#             */
/*   Updated: 2024/10/14 15:32:01 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_printable(char c);
void	ft_lowercase(char *str);
void	ft_capitalizer(char *str);

void	ft_capitalizer(char *str)
{
	int		i;
	char	output;

	i = 0;
	ft_lowercase(str);
	while (str[i] != 0)
	{
		if (!is_printable((str[i - 1])) && is_printable((str[i])))
		{
			if (str[i] >= 97 && str[i] <= 122)
				output = str[i] - 32;
			else
				output = str[i];
		}
		else
			output = str[i];
		write(1, &output, 1);
		i++;
	}
}

void	ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
}

int	is_printable(char c)
{
	return (c >= 33 && c <= 126);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			ft_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
