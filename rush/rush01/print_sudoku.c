/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 12:28:53 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/09 12:28:55 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_sudoku(char *tab)
{
	int i;

	i = -1;
	while (tab[++i])
	{
		ft_putchar(tab[i]);
		if (i < 8)
			write(1, " ", 1);
	}
	write(1, "\n", 1);
}
