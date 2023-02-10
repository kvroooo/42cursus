/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:43:42 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/27 11:12:18 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{	
		i++;
	}
	while (j < nb && (src[j] != '\0'))
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	unsigned int n = 3;
	char	dest[] = "your";
	char	src[] = "momma";

	printf("c : %s\n", ft_strncat(dest, src, n));
	//printf("c fct : %s\n", strncat(dest, src, n));
}

