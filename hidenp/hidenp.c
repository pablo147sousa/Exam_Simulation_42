/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:32:01 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/24 15:24:11 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_hidenp(char *str1, char *str2);

int	ft_hidenp(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str2[j] != 0)
	{
		if (str2[j] == str1[i])
		{
			i++;
		}
		j++;
	}
	return (str1[i] == '\0');
}

int	main(int argc, char *argv[])
{
	char	result;

	if (argc == 3)
	{
		result = ft_hidenp(argv[1], argv[2]) + '0';
		write(1, &result, 1);
	}
	write(1, "\n", 1);
	return (0);
}
