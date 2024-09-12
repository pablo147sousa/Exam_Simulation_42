/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:28:51 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/12 15:43:36 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int main(void)
{
	int a = 6;
	int b = 9;

	printf("Before: %d %d\n", a, b);
	ft_swap(&a, &b);
	printf("After: %d %d\n", a, b);
	return (0);
}
*/