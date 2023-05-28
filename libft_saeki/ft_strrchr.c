/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuendo <yuendo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:54:28 by yuendo            #+#    #+#             */
/*   Updated: 2023/05/28 17:54:21 by yuendo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	ssize;
	char *result;
	size_t i;

	str = (char *)s;
	ssize = ft_strlen(str);
	if (str[ssize] == (char)c)
		return (&str[ssize]);
	while (ssize--)
	{
		if (str[ssize] == (char)c)
			return (&str[ssize]);
	}
	// while (i < ssize)
	// {
	// 	if (str[i] == (char)c)
	// 		result = &str[i];
	// 	i++;
	// }
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     char a[] = "aiueo";
//     printf("%s : %s\n", "ft", "lib");
//     printf("%s : %s\n", ft_strrchr(a, 'a'), strrchr(a, 'a'));
//     printf("%s : %s\n", ft_strrchr(a, 'i'), strrchr(a, 'i'));
//     printf("%s : %s\n", ft_strrchr(a, 'u'), strrchr(a, 'u'));
//     printf("%s : %s\n", ft_strrchr(a, 'e'), strrchr(a, 'e'));
//     printf("%s : %s\n", ft_strrchr(a, 'o'), strrchr(a, 'o'));
//     printf("%s : %s\n", ft_strrchr(a, 0), strrchr(a, 0));
//     printf("%p : %p\n", ft_strrchr(a, 0), strrchr(a, 0));
//     printf("%s : %s\n", ft_strrchr(a, 1), strrchr(a, 1));
//     printf("%s : %s\n", ft_strrchr(a, 'z'), strrchr(a, 'z'));

//     printf("size of a is %zu\n", ft_strlen(a));
//     return (0);
// }