/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:48:46 by pmoreira          #+#    #+#             */
/*   Updated: 2024/09/13 16:08:01 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bib.h"

int	ft_sum(int n1, int n2);
int	ft_subt(int n1, int n2);
int	ft_mult(int n1, int n2);
int	ft_div(int n1, int n2);
int	ft_rest(int n1, int n2);

int	ft_sum(int n1, int n2)
{
	return (n1 + n2);
}

int	ft_subt(int n1, int n2)
{
	return (n1 - n2);
}

int	ft_mult(int n1, int n2)
{
	return (n1 * n2);
}

int	ft_div(int n1, int n2)
{
	return (n1 / n2);
}

int	ft_rest(int n1, int n2)
{
	return (n1 % n2);
}
