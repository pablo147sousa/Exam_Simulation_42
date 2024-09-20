/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:13:09 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/20 15:53:59 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_inter(char *str1, char *str2, int *tab);

void	ft_inter(char *str1, char *str2, int *tab)
{
	int	i;
	int	letter;

	i = 0;
	while (str1[i] != 0)
	{
		letter = 0;
		while (str2[letter] != 0)
		{
			if (str1[i] == str2[letter])
			{
				if (tab[(int)str1[i]] == 0)
				{
					tab[(int)str1[i]] = 1;
					write(1, &str2[letter], 1);
				}
			}
			letter++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	tab[256];
	int	i;

	i = 0;
	while (i < 256)
		tab[i++] = 0;
	if (argc == 3)
	{
		ft_inter(argv[1], argv[2], tab);
	}
	write(1, "\n", 1);
	return (0);
}
