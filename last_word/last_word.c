/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:39:18 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/16 16:58:39 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*last_word(char *str);
int		is_valid(char src);

int	is_valid(char src)
{
	if (src >= 33 && src <= 126)
		return (1);
	return (0);
}

char	*last_word(char *str)
{
	int		i;
	char	*word;

	i = 0;
	word = 0;
	while (str[i] != 0)
	{
		if (is_valid(str[i]) && !is_valid(str[i - 1]))
			word = &str[i];
		i++;
	}
	return (word);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*word;

	i = 0;
	if (argc == 2)
	{
		word = last_word(argv[1]);
		if (word != 0)
		{
			while (word[i] != 0)
			{
				if (is_valid(word[i]))
					write(1, &word[i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
