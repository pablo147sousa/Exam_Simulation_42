/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:51:27 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/10 18:19:16 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_lowercase(char letter);
int		is_uppercase(char letter);
void	rot13(char src);

void	rot13(char src)
{
	char	output;

	if (is_lowercase(src))
	{
		if (src <= 'm')
			output = src + 13;
		else
			output = src - 13;
	}
	else if (is_uppercase(src))
	{
		if (src <= 'M')
			output = src + 13;
		else
			output = src - 13;
	}
	else
		output = src;
	write(1, &output, 1);
}

int	is_uppercase(char letter)
{
	if (letter >= 'A' && letter <= 'Z')
		return (1);
	return (0);
}

int	is_lowercase(char letter)
{
	if (letter >= 'a' && letter <= 'z')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (str[i] != 0)
		{
			rot13(str[i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
