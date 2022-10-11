/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalmaz <acalmaz@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:06:13 by acalmaz           #+#    #+#             */
/*   Updated: 2022/08/04 15:07:22 by acalmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
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
	printf("%d\n", ft_strncmp("azzzzz", "zaaaaa", 5));
	printf("%d\n", ft_strncmp("zzzzz", "aaaaa", 5));
	printf("%d\n", ft_strncmp("ahmet", "canta", 5));
	printf("%d\n", ft_strncmp("Haribo", "Hello", 5));
	printf("%d\n\n\n", ft_strncmp("Hello", "Hello", 5));
	printf("%d\n", strncmp("azzzzz", "zaaaaa", 5));
	printf("%d\n", strncmp("zzzzz", "aaaaa", 5));
	printf("%d\n", strncmp("ahmet", "canta", 5));
	printf("%d\n", strncmp("Haribo", "Hello", 5));
	printf("%d", strncmp("Hello", "Hello", 5));
 }*/
