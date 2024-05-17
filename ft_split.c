/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pda-roch <pda-roch@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:34:08 by pda-roch          #+#    #+#             */
/*   Updated: 2024/05/17 17:52:45 by pda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_array(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t	num_words;
	int		i;

	num_words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else if (s[i] != c && s[i] != '\0')
		{
			num_words++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (num_words);
}

static size_t	word_len(char const *s, int i, char c)
{
	size_t	length;
	int		j;

	length = 0;
	j = i;
	while (s[j] != '\0' && s[j] != c)
	{
		j++;
		length++;
	}
	return (length + 1);
}

static char	*make_word(char const *s, int i, char c)
{
	char	*new_str;
	int		j;
	int		x;

	new_str = malloc(sizeof(char) * word_len(s, i, c));
	if (new_str == NULL)
	{
		return (NULL);
	}
	j = i;
	x = 0;
	while (s[j] != '\0' && s[j] != c)
	{
		new_str[x] = s[j];
		j++;
		x++;
	}
	new_str[x] = '\0';
	return (new_str);
}

char	**ft_split(char const *s, char c)
{
	char	**new_array;
	size_t	word_count;
	int		i;
	size_t	j;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	new_array = malloc(sizeof(char *) * (word_count + 1));
	if (new_array == NULL)
		return (NULL);
	i = 0;
	j = -1;
	while (++j < word_count)
	{
		while (s[i] == c)
			i++;
		new_array[j] = make_word(s, i, c);
		if (new_array[j] == NULL)
			return (free_array(new_array));
		i = i + word_len(s, i, c);
	}
	new_array[j] = NULL;
	return (new_array);
}
