/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:06:11 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/12 16:29:21 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_lowercase(char src);
int		is_uppercase(char src);
void	ft_mirror(char *str);

void	ft_mirror(char *str)
{
	int		i;
	char	output;

	i = 0;
	while (str[i] != 0)
	{
		if (is_lowercase(str[i]))
		{
			if (str[i] <= 'm')
				output = 'z' - (str[i] - 'a');
			else
				output = 'a' + ((str[i] - 'z') * (-1));
		}
		else if (is_uppercase(str[i]))
		{
			if (str[i] <= 'M')
				output = 'Z' - (str[i] - 'A');
			else
				output = 'A' + ((str[i] - 'Z') * (-1));
		}
		else
			output = str[i];
		write(1, &output, 1);
		i++;
	}
}

int	is_uppercase(char src)
{
	if (src >= 65 && src <= 90)
		return (1);
	return (0);
}

int	is_lowercase(char src)
{
	if (src >= 97 && src <= 122)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}
