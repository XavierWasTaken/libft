/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pda-roch <pda-roch@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:38:39 by pda-roch          #+#    #+#             */
/*   Updated: 2024/05/16 18:18:41 by pda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char *str = NULL;
	char c = 'c';
	size_t n = 10;
	printf("str before memset:%s\n", str);
	ft_memset(str,c,n);
	printf("str after memset:%s\n", str);
}
*/