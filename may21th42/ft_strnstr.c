/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuendo <yuendo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:11:15 by yuendo            #+#    #+#             */
/*   Updated: 2023/05/21 13:25:11 by yuendo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && len >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

// char *ft_strnstr(const char *haystack, const char *needle, size_t len){
//     const char *n;
//     char *first_occur;
//     size_t i;
//     if (*needle == '\0')
//         return ((char *)haystack);
// 	while(*haystack && len){
//         n = needle;
//         first_occur = (char *)haystack;
//         i = 0;
//         while(*haystack && *n && *haystack == *n && i < len){
//             haystack++;
//             n++;
//             i++;
//         }
//         if (*n == '\0')
//             return (first_occur);
//         haystack++;
//         len--;
//     }
//     return (NULL);
// }