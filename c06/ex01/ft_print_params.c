/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalmaz <acalmaz@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:38:17 by acalmaz           #+#    #+#             */
/*   Updated: 2022/08/08 16:48:21 by acalmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (ac > 1)
	{
		while (ac > i)
		{
			while (av[i][j] != '\0')
			{
				write(1, &av[i][j], 1);
				j++;
			}
			j = 0;
			i++;
			write(1, "\n", 1);
		}
	}
	return (0);
}
