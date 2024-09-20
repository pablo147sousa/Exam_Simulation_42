/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:12:48 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/20 14:48:23 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_union(char *str[]);
int		ft_verify(char *src, char *target);

int	ft_verify(char *src, char *target)
{
	while (src < target)
	{
		if (*src == *target)
			return (0);
		src++;
	}
	return (1);
}

void	ft_union(char *str[])
{
	int	i;
	int	letter;

	i = 0;
	while (i < 2)
	{
		letter = 0;
		while (str[i][letter] != 0)
		{
			if (ft_verify(str[0], &str[i][letter]))
				write(1, &str[i][letter], 1);
			letter++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		ft_union(&argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
