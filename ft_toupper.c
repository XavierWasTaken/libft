/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pda-roch <pda-roch@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:18:09 by pda-roch          #+#    #+#             */
/*   Updated: 2024/04/26 18:04:29 by pda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
	{
		c -= 32;
	}
	return (c);
}

/*
int main() {
    // Test cases
    char test_chars[] = {'a', 'b', 'z', 'A', 'B', 'Z', '1', '.', ' '};
    int num_test_cases = sizeof(test_chars) / sizeof(test_chars[0]);

    printf("Testing ft_toupper function:\n");
    for (int i = 0; i < num_test_cases; i++) {
        char original = test_chars[i];
        char converted = ft_toupper(original);
        printf("Original: '%c', Converted: '%c'\n", original, converted);
    }

    return 0;
}
*/