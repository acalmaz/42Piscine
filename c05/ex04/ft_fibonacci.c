/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalmaz <acalmaz@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:57:05 by acalmaz           #+#    #+#             */
/*   Updated: 2022/08/08 15:28:32 by acalmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	a;

	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else if (index > 1)
	{
		return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	else
		return (-1);
}

int main()
{
	printf("%d", ft_fibonacci(8));
}
