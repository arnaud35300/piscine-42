/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 23:51:20 by arguilla          #+#    #+#             */
/*   Updated: 2020/09/09 00:26:15 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char last_character;

	last_character = 'z';
	while (last_character >= 'a')
	{
		write(1, &last_character, 1);
		last_character--;
	}
}
