/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:14:26 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/18 15:46:29 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject);

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	result;
	size_t	j;

	result = 0;
	while (s[result])
	{
		j = 0;
		while (reject[j])
		{
			if (s[result] == reject[j])
				return (result);
			j++;
		}
		result++;
	}
	return (result);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char	*str1 = "Sring de teste versao 1";
	char	*str2 = "teste";
	size_t	result;

	result = strcspn(str1, str2);
	printf("Expected: %zu\n", result);
	result = ft_strcspn(str1,str2);
	printf("Result : %zu\n", result);
	return (0);
}
*/