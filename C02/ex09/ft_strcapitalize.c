/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 15:20:48 by arguilla          #+#    #+#             */
/*   Updated: 2020/09/13 17:38:45 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alpha(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (ft_is_alpha(str[i]))
		{
			if (j && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (!j && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			j = 0;
		}
		else
			j = 1;
		i++;
	}
	return (str);
}
