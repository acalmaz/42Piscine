/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belbir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:31:12 by belbir            #+#    #+#             */
/*   Updated: 2022/07/24 18:34:04 by belbir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int en, char ilk, char orta, char son)
{
	int	i;

	i = 1;
	while (i <= en)
	{
		if (i == 1)
			ft_putchar(ilk);
		else if (i < en)
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
			ft_print_line(x, '/', '*', '\\');
		else if (i < y)
			ft_print_line(x, '*', ' ', '*');
		else
			ft_print_line(x, '\\', '*', '/');
		i++;
	}
}
