/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:13:29 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/27 15:46:01 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_capitalizer(char *str);
void	ft_lowercase(char *str);
int		is_printable(char input);

void	ft_capitalizer(char *str)
{
	int	i;

	i = 0;
	ft_lowercase(str);
	while (str[i] != 0)
	{
		if ((str[i] >= 97 && str[i] <= 122) && !(is_printable(str[i + 1])))
		{
			str[i] -= 32;
		}
		write(1, &str[i], 1);
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
		{
			str[i] += 32;
		}
		i++;
	}
}

int	is_printable(char input)
{
	if (input >= 33 && input <= 126)
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc >= 2)
	{
		while (i < argc)
			ft_capitalizer(argv[i++]);
	}
	write(1, "\n", 1);
	return (0);
}
