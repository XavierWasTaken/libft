/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pda-roch <pda-roch@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:22:55 by pda-roch          #+#    #+#             */
/*   Updated: 2024/05/15 13:08:34 by pda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!str && !len)
		return (0);
	if (to_find[0] == '\0' || to_find == str)
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && (i + j) < len)
		{
			if (str[i + j] == '\0' && to_find[j] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		if (to_find[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char str1[] = "Foo Bar Bzz";
	char str2[] = "Bar";
	//size_t str1_len = ft_strlen(str1);
	size_t i = 6;
	char *result = ft_strnstr(str1, str2, i);
	if(result != NULL)
		printf("str2 found at position:%ld of str1\n", result - str1);
	else
		printf("str2 not found in str1\n");
	return (0);
}
*/