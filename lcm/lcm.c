/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:27:04 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/24 16:45:42 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b);

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	mdc;
	unsigned int	num;
	unsigned int	temp;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
	{
		mdc = b;
		num = a;
	}
	else
	{
		mdc = a;
		num = b;
	}
	while (num % mdc != 0)
	{
		temp = num;
		num = mdc;
		mdc = temp % num;
	}
	return ((a * b) / mdc);
}
/*
#include <stdio.h>

int	main(void)
{
	int mmc;

	mmc = lcm(255, 688);
	printf("%d\n", mmc);
}
*/