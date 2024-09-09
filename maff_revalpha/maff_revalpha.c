/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:11:26 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/09 15:16:07 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	upper;
	char	lower;

	upper = 'Y';
	lower = 'z';
	while (upper >= 'A' && lower >= 'b')
	{
		write(1, &lower, 1);
		write(1, &upper, 1);
		upper -= 2;
		lower -= 2;
	}
	write(1, "\n", 1);
	return (0);
}
