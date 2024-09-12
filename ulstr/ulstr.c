/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:44:51 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/12 15:58:10 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_lowercase(char src);
int		is_uppercase(char src);
void	ft_ulstr(char *str);

void	ft_ulstr(char *str)
{
	int		i;
	char	output;

	i = 0;
	while (str[i] != 0)
	{
		if (is_lowercase(str[i]))
			output = str[i] - 32;
		else if (is_uppercase(str[i]))
			output = str[i] + 32;
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
		ft_ulstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
