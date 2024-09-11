/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:27:09 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/11 13:23:25 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_printable(char c);

int	is_printable(char c)
{
	if (c >= 33 && c <= 126)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (!(is_printable(argv[1][i])) && argv[1][i] != 0)
		{
			i++;
		}
		while (is_printable(argv[1][i]))
		{
			write(1, &argv[1][i], 1),
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
