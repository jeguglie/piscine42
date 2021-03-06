/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 05:56:24 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/04 06:34:03 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (nb <= 0)
		return (0);
	while (j < nb)
	{
		j = i * i;
		i++;
	}
	i--;
	if (i * i != nb)
		return (0);
	return (i);
}
