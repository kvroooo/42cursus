/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:54:27 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/31 04:31:52 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index >= 2)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_fibonacci(5));
}
*/
