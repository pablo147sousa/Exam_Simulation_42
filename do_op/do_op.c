/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:26:11 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/13 16:06:41 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bib.h"
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		n1;
	int		n2;
	char	op;

	if (argc == 4)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[3]);
		op = argv[2][0];
		if (op == '+')
			printf("%d", ft_sum(n1, n2));
		if (op == '-')
			printf("%d", ft_subt(n1, n2));
		if (op == '*')
			printf("%d", ft_mult(n1, n2));
		if (op == '/')
			printf("%d", ft_div(n1, n2));
		if (op == '%')
			printf("%d", ft_rest(n1, n2));
	}
	printf("\n");
	return (0);
}
