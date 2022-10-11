/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalmaz <acalmaz@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:47:25 by acalmaz           #+#    #+#             */
/*   Updated: 2022/08/01 23:20:29 by acalmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size)
	{
		while (*(tab+i) > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		i++;
	}
}

int main()
{
	int i = 0;
	int size = 5;
	int tab[5] = {5, 2, 3, 1, 4};
	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0],tab[1],tab[2],tab[3],tab[4]);
}

