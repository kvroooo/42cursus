/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlemery <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:54:56 by zlemery           #+#    #+#             */
/*   Updated: 2022/08/30 12:52:11 by zlemery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index > 1)
		return ((ft_fibonacci(index - 2)) + (ft_fibonacci(index - 1)));
	return (0);
}
/*
#include <stdio.h>

int	main(int a)
{
	printf("%d\n", ft_fibonacci(0));
}*/
