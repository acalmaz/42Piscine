/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalmaz <acalmaz@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:35:37 by acalmaz           #+#    #+#             */
/*   Updated: 2022/08/01 18:45:53 by acalmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int main()
{
	int c;
	int d;
	int e;
	int f;

	c = 15;
	d = 4;
	ft_div_mod(c, d, &e, &f);
	printf("%d, %d, %d, %d", c, d, e, f);
	return (0);
}
