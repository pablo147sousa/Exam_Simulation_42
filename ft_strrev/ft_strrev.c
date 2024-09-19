/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:51:48 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/19 14:08:39 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str);

char	*ft_strrev(char *str)
{
	int		i;
	int		size;
	char	temp;

	i = 0;
	size = 0;
	temp = 0;
	while (str[size] != 0)
		size++;
	while (i < (size / 2))
	{
		temp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = temp;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Sring";
	//char	*str2 = "teste";

	printf("Before : %s\n", str1);
	ft_strrev(str1);
	printf("After : %s\n", str1);
	return (0);
}
*/