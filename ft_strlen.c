/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pda-roch <pda-roch@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:25:56 by pda-roch          #+#    #+#             */
/*   Updated: 2024/05/03 16:59:43 by pda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return ((size_t)i);
}
/*
int	main(void)
{
	char str1[] = "Hello World";
	size_t result = ft_strlen(str1);
	printf("str1 length:%ld\n", result);
	return (0);
}
*/
