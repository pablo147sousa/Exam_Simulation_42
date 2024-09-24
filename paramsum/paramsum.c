/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:49:13 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/24 16:58:56 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, const char *argv[])
{
	char	output;

	(void) argv;
	output = (argc - 1) + '0';
	write(1, &output, 1);
	write(1, "\n", 1);
	return (0);
}
