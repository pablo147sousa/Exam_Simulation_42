/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:59:58 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/16 17:13:11 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len);

int	max(int *tab, unsigned int len)
{
	int				num;
	unsigned int	i;

	i = 0;
	if (len == 0)
		return (0);
	num = tab[i];
	while (i < len)
	{
		if (num < tab[i])
			num = tab[i];
		i++;
	}
	return (num);
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab[] = {-1, 0, -2, -3, 3, 5, 6, 0};
	int size = sizeof(tab) / sizeof(int);
	printf("result: %d\n", max(tab, size));
	return (0);
}
*/