/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:15:40 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/10 16:27:31 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);
char	*rev_print(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*rev_print(char *str)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i > 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	if (str[0] != '\0')
		write(1, &str[0], 1);
	write(1, "\n", 1);
	return (str);
}
/*
int	main(void)
{
	char	*str = "Hello World";

	rev_print(str);
	return (0);
}
*/