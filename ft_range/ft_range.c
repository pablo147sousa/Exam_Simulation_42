/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:21:17 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/23 19:04:02 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end);

int	*ft_range(int start, int end)
{
	int	size;
	int	i;
	int	*range;

	size = end - start;
	i = 0;
	if (size < 0)
		size *= (-1);
	size++;
	range = (int *) malloc(size * sizeof(int));
	if (range == 0)
		return (0);
	if (start < end)
	{
		while (i < size)
			range[i++] = start++;
	}
	else
	{
		while (i < size)
			range[i++] = start--;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range;
	int	i;
	int	size;
	int	end = -3;
	int	start = 0;

	size = end - start;
	i = 0;
	if (size < 0)
		size *= (-1);
	size++;

	range = ft_range(start, end);
	i = 0;
	while(i < size)
		printf("%d\n", range[i++]);
}
*/