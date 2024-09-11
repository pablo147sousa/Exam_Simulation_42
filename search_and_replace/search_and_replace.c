/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:41:37 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/11 14:12:44 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str);
void	ft_replace(char src, char find, char subs);

void	ft_replace(char src, char find, char subs)
{
	if (src == find)
		write(1, &subs, 1);
	else
		write(1, &src, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1)
		{
			write(1, "\n", 1);
			exit (0);
		}
		while (argv[1][i] != 0)
		{
			ft_replace(argv[1][i], argv[2][0], argv[3][0]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
