/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:05:00 by arguilla          #+#    #+#             */
/*   Updated: 2020/09/10 15:07:06 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	transition;

	i = 0;
	size = size - 1;
	while (i < size)
	{
		transition = *(tab + i);
		*(tab + i) = *(tab + size);
		*(tab + size) = transition;
		i++;
		size--;
	}
}
