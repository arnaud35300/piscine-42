/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 20:49:25 by arguilla          #+#    #+#             */
/*   Updated: 2020/09/21 11:49:50 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s_len;
	unsigned int	d_len;
	unsigned int	i;

	i = 0;
	s_len = 0;
	d_len = 0;
	s_len = ft_strlen(src);
	d_len = ft_strlen(dest);
	if (size <= d_len)
		return (size + s_len);
	i = 0;
	while (size && (size-- - d_len - 1) && src[i])
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (s_len + d_len);
}

unsigned int	ft_strlcat2(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int len_src;
	unsigned int len_dest;
	unsigned int len_total;
	
	i = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	len_total = len_src + len_dest;
	if (size <= len_dest)
		return (size + len_src);
	while (i < len_src && i < (size - len_dest - 1))
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_total);
}

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	(void)argc;
	char str1[100] = "salut";
	char str2[100]= "";

	printf("%lu str1 : %s str2 : %s \n", strlcat(str1, str2, 0), str1, str2);

	char str3[100] = "salut";
	char str4[100]= "";

	printf("%d str1 : %s str2 : %s \n", ft_strlcat2(str3, str4, 0), str3, str4);
}
