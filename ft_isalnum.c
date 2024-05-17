/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pda-roch <pda-roch@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:13:47 by pda-roch          #+#    #+#             */
/*   Updated: 2024/04/26 18:01:57 by pda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}

/*
int main(void)
{
	char c = '1';

	printf("is c an ""alnum""? 1 if yes, 0 if no: %i\n", ft_isalnum(c));

	return(0);
}
*/
