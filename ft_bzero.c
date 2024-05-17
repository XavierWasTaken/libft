/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pda-roch <pda-roch@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:28:43 by pda-roch          #+#    #+#             */
/*   Updated: 2024/04/26 18:01:49 by pda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*i;

	i = s;
	while (n > 0)
	{
		*i = '\0';
		i++;
		n--;
	}
}

// void ft_bzero(void *s, size_t n)
// {
// 	ft_memset(s, 0, n);
// }
/*
int	main(void)
{
	char str1[]="Hello World";
	printf("%s\n", str1);
	ft_bzero(str1, strlen(str1));
	printf("%s\n", str1);
	return(0);
}
*/
