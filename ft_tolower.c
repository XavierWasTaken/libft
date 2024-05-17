/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pda-roch <pda-roch@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:23:19 by pda-roch          #+#    #+#             */
/*   Updated: 2024/04/26 18:04:29 by pda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		c += 32;
	}
	return (c);
}

/*
int main() {
    // Test cases
    char test_chars[] = {'a', 'b', 'z', 'A', 'B', 'Z', '1', '.', ' '};
    int num_test_cases = sizeof(test_chars) / sizeof(test_chars[0]);

    printf("Testing ft_tolower function:\n");
    for (int i = 0; i < num_test_cases; i++) {
        char original = test_chars[i];
        char converted = ft_tolower(original);
        printf("Original: '%c', Converted: '%c'\n", original, converted);
    }

    return 0;
}
*/