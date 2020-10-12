/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 01:10:11 by arguilla          #+#    #+#             */
/*   Updated: 2020/09/27 01:24:04 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *tab_result;
	int i;

	if (!(tab_result = (int *)malloc(sizeof(int) * length)))
		return (0);
	i = -1;
	while (++i < length)
		tab_result[i] = (*f)(tab[i]);
	return (tab_result);
}
