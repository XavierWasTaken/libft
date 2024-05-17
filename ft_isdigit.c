/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pda-roch <pda-roch@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:09:29 by pda-roch          #+#    #+#             */
/*   Updated: 2024/04/26 18:02:08 by pda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

/*
int main(void)
{
	char c = '1';

	printf("is c a digit? 1 if yes, 0 if no: %i\n", ft_isdigit(c));

	return(0);
}
*/