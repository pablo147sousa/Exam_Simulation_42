/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:58:58 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/09 15:07:59 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	odd;
	char	even;

	odd = 'B';
	even = 'a';
	while (odd <= 'Z' && even <= 'y')
	{
		write(1, &even, 1);
		write(1, &odd, 1);
		even += 2;
		odd += 2;
	}
	write(1, "\n", 1);
	return (0);
}
