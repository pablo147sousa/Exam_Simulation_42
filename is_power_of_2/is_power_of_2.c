/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:52:38 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/16 16:36:41 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n);

// Bitwise AND comparison
int	is_power_of_2(unsigned int n)
{
	if (n <= 0)
		return (0);
	return ((n & (n - 1)) == 0);
}
/*
#include <stdio.h>

int main(void)
{
	printf("result: %d\n", is_power_of_2(1));
	return 0;
}
*/