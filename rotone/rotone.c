/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:26:53 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/10 18:39:45 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char src);
int		is_letter(char src);

int	is_letter(char src)
{
	if ((src >= 'a' && src <= 'z') || (src >= 'A' && src <= 'Z'))
		return (1);
	return (0);
}

void	rotone(char src)
{
	char	output;

	if (is_letter(src))
	{
		if (src == 'z' || src == 'Z')
			output = src - 25;
		else
			output = src + 1;
	}
	else
		output = src;
	write(1, &output, 1);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 0;
	if (argc == 2)
	{
		str = argv[1];
		while (str[i] != 0)
		{
			rotone(str[i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
