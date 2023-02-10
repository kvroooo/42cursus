/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlemery <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:20:31 by zlemery           #+#    #+#             */
/*   Updated: 2022/08/30 16:28:06 by zlemery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			nb = nb * n;
			i++;
		}
	}
	return (nb);
}
/*
#include <stdio.h>

int main(void)
{
	int n = -7;
	int p = 9;
	printf("%d", ft_iterative_power(n, p));
}*/
