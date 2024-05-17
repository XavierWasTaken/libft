/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pda-roch <pda-roch@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:35:30 by pda-roch          #+#    #+#             */
/*   Updated: 2024/05/17 16:37:43 by pda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*dst;
	const char		*sourc;

	if (dest == NULL && src == NULL)
	{
		return (NULL);
	}
	dst = dest;
	sourc = src;
	i = 0;
	while (i < n)
	{
		dst[i] = sourc[i];
		i++;
	}
	return (dest);
}
