/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:06:04 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/10 15:46:52 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letter, char base);

void	ft_putchar(char letter, char base)
{
	while (base <= letter)
	{
		write(1, &letter, 1);
		base++;
	}
}

int	main(int argc, char **argv)
{
	char	*str;
	int		i;

	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (str[i] != 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				ft_putchar(str[i], 'a');
			else if (str[i] >= 'A' && str[i] <= 'Z')
				ft_putchar(str[i], 'A');
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
