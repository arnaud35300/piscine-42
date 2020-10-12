/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 04:39:20 by arguilla          #+#    #+#             */
/*   Updated: 2020/09/24 18:15:20 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_exist_base(char *base)
{
	int i;
	int j;
	int size_base;

	j = 0;
	i = 0;
	size_base = 0;
	if (ft_strlen(base) < 2)
		return (0);
	size_base = ft_strlen(base);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		
		// ---------- verifie les doublons 
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		// -------------------
		i++;
	}
	return (size_base);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbr_long;
	int		i;

	if (base == NULL || ft_exist_base(base) == 0)
		return ;
	i = ft_strlen(base); // 16
	nbr_long = nbr; // cast le type (int devient long) ---> pour gerer le INT_MIN
	if (nbr_long < 0)
	{
		ft_putchar('-');
		nbr_long *= -1;
	}
	if (nbr_long > i - 1)
	{
		
		// ici, on rappelle la fonction dans elle meme, le script s'arrete tant que la fonction n'as pas fini son processus
		ft_putnbr_base(nbr_long / i, base);
	
		nbr_long = nbr_long % i;
	}
	ft_putchar(base[nbr_long % i]);
}

#include <limits.h>
#include <stdio.h>

int main(void)
{
	ft_putnbr_base(-87, "poneyvif");
}
