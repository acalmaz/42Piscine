/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalmaz <acalmaz@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 01:20:17 by acalmaz           #+#    #+#             */
/*   Updated: 2022/08/10 02:35:28 by acalmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a])
		a++;
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		x;
	char	*str;
	int		len;

	x = 0;
	len = 0;
	while (x < size)
	{
		len = len + ft_strlen(strs[x]);
		x++;
	}
	len = len + ((size - 1) * ft_strlen(sep));
	str = (char *)malloc(sizeof(char) * (len));
	if (str == NULL)
		return (NULL);
	x = 0;
	while (x < size)
	{
		ft_strcat(str, strs[x]);
		if ((x + 1) < size)
			ft_strcat(str, sep);
		x++;
	}
	return (str);
}

#include <stdio.h>

int    main(void)
{
    char *text[3];

    text[0] = "test";
    text[1] = "bir";
    text[2] = "kiiii";

    printf("%s", ft_strjoin(3, text, "-"));
}
