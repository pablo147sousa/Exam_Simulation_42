/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:34:24 by pmoreira          #+#    #+#             */
/*   Updated: 2024/10/16 16:08:17 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size);
void	ft_swap(int *num1, int *num2);

void	ft_swap(int *num1, int *num2)
{
	int	temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	min;

	i = 0;
	while (i < (size - 1))
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[min] > tab[j])
				min = j;
			j++;
		}
		if (i != min)
			ft_swap(&tab[i], &tab[min]);
		i++;
	}
}
/*
#include <stdio.h>

int main()
{
	int tab[] = {6,5,4,3,4,2,1};
	int i = 0;
	while (tab[i] != 0)
	{
		printf("antes:%d\n", tab[i++]);
	}
	sort_int_tab(tab,(sizeof(tab)/sizeof(int)));
	i = 0;
	while (tab[i] != 0)
	{
		printf("depois:%d\n", tab[i++]);
	}
}
*/