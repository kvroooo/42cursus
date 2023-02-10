/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlemery <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:02:40 by zlemery           #+#    #+#             */
/*   Updated: 2022/08/30 12:29:24 by zlemery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (nb / i))
	{
		if ((nb % i) == 0 && i != 1)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb > 2147483647)
		return (0);
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb) != 1)
	{
		nb = ft_find_next_prime(nb + 1);
	}
	return (nb);
}
/*
#include <stdio.h>

int main(void)
{
	int a;

	a = 2147483647;
	printf("%d\n", ft_find_next_prime(a));
}*/
