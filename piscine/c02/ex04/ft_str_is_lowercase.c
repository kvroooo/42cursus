/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:52:41 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/25 09:21:49 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char min[] = "fdgerfe";
	char trap[] = "gfdn ge";
	char empty[] = "";
	
	printf(" min = %d", ft_str_is_lowercase(min));
	printf(" trap = %d", ft_str_is_lowercase(trap));
	printf(" empty = %d", ft_str_is_lowercase(empty));

	return (0);
}
*/
