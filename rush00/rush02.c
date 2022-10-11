/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belbir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:01:31 by belbir            #+#    #+#             */
/*   Updated: 2022/07/24 18:13:57 by belbir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int x, int ilk, char orta, char son)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(ilk);
		else if (i < x)
			ft_putchar(orta);
		else
			ft_putchar (son);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
			ft_print_line(x, 'A', 'B', 'A');
		else if (i < y)
			ft_print_line(x, 'B', ' ', 'B');
		else
			ft_print_line(x, 'C', 'B', 'C');
		i++;
	}
}
