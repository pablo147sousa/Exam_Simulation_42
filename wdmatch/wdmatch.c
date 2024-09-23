/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:56:21 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/23 17:06:16 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_wdmatch(char *str, char *src);
void	ft_print(char *str);

void	ft_print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		write(1, &str[i++], 1);
}

void	ft_wdmatch(char *str, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[j] != 0)
	{
		if (str[i] == src[j])
			i++;
		j++;
	}
	if (str[i] == '\0')
		ft_print(str);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		ft_wdmatch(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return (0);
}
