/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutoendo <yutoendo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:36:49 by yuendo            #+#    #+#             */
/*   Updated: 2023/05/26 22:31:55 by yutoendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	my_word_count(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	*my_strncpy(char *destination, const char *source, size_t num)
{
	if (num == 0)
	{
		return (destination);
	}
	if (*source == '\0')
	{
		*destination = '\0';
		return (my_strncpy(destination + 1, source, num - 1));
	}
	*destination = *source;
	return (my_strncpy(destination + 1, source + 1, num - 1));
}

static char	*my_make_word(char const *s, size_t len)
{
	char	*word;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	word[len] = '\0';
	my_strncpy(word, s, len);
	return (word);
}

static int	my_process_word(char const **s, char c, char **split, int i)
{
	int	len;

	len = 0;
	while ((*s)[len] != c && (*s)[len] != '\0')
		len++;
	split[i] = my_make_word(*s, len);
	if (split[i] == NULL)
	{
		while (i > 0)
			free(split[--i]);
		free(split);
		return (-1);
	}
	*s += len;
	return (i + 1);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**split;
	int		i;

	words = my_word_count(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (split == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i = my_process_word(&s, c, split, i);
			if (i == -1)
				return (NULL);
		}
		else
			s++;
	}
	split[i] = NULL;
	return (split);
}
