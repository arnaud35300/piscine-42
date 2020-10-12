/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:19:09 by arguilla          #+#    #+#             */
/*   Updated: 2020/09/12 15:12:26 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int transition;

	i = 0;
	size = size - 1;
	while (i < size)
	{
		if (*(tab + i) > *(tab + i + 1))
		{
			transition = *(tab + i);
			*(tab + i) = *(tab + i + 1);
			*(tab + i + 1) = transition;
			i = -1;
		}
		i++;
	}
}
