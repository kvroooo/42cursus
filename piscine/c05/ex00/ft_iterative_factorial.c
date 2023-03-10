/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:02:26 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/30 17:15:18 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	r;

	i = 1;
	r = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i < r)
	{
		nb = nb * i;
		i++;
	}	
	return (nb);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(4));
}*/
