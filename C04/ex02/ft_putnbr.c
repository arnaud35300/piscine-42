/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 22:59:48 by arguilla          #+#    #+#             */
/*   Updated: 2020/09/18 12:58:33 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int nbl;

	nbl = (long int)nb;
	if (nbl < 0)
	{
		nbl = nbl * (-1);
		ft_putchar('-');
	}
	if (nbl > 9)
	{
		ft_putnbr(nbl / 10);
		ft_putnbr(nbl % 10);
	}
	if (nbl >= 0 && nbl <= 9)
	{
		ft_putchar(nbl + '0');
	}
}
