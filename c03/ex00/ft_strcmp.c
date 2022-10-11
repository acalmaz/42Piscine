/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalmaz <acalmaz@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 23:53:04 by acalmaz           #+#    #+#             */
/*   Updated: 2022/08/04 15:05:21 by acalmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	printf("%d\n", ft_strcmp("azzzzz", "zaaaaa"));
	printf("%d\n", ft_strcmp("zzzzz", "aaaaa"));
	printf("%d\n", ft_strcmp("ahmet", "canta"));
	printf("%d\n", ft_strcmp("Haribo", "Hello"));
	printf("%d\n\n\n", ft_strcmp("Hello", "Hello"));
	printf("%d\n", strcmp("azzzzz", "zaaaaa"));
	printf("%d\n", strcmp("zzzzz", "aaaaa"));
	printf("%d\n", strcmp("ahmet", "canta"));
	printf("%d\n", strcmp("Haribo", "Hello"));
	printf("%d", strcmp("Hello", "Hello"));
}*/
