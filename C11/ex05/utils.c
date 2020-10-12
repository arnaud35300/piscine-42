/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 16:06:05 by arguilla          #+#    #+#             */
/*   Updated: 2020/09/28 16:42:30 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int		ft_atoi(char *str)
{
	int		s;
	int		r;

	r = 0;
	s = 1;
	while ((*str == 32 || (*str >= 9 && *str <= 13)))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		r = r * 10 + *str - '0';
		str++;
	}
	return (r * s);
}
