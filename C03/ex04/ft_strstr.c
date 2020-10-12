/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 19:02:05 by arguilla          #+#    #+#             */
/*   Updated: 2020/09/13 20:06:44 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int position;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			position = i;
			while (str[i] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (&str[position]);
				j++;
				i++;
			}
			i = position;
		}
		i++;
	}
	return (0);
}
