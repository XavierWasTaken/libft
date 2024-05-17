/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pda-roch <pda-roch@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:23:34 by pda-roch          #+#    #+#             */
/*   Updated: 2024/04/26 18:02:12 by pda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
/*
int main(void)
{
	char c = '1';

	printf("is c a printable character in ASCII? 
		1 if yes, 0 if no: %i\n", ft_isprint(c));
	return(0);
}
*/
