/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuendo <yuendo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:50:32 by yutoendo          #+#    #+#             */
/*   Updated: 2023/05/28 17:54:01 by yuendo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	s = (const unsigned char *)src;
	d = (unsigned char *)dst;
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char buf[] = "1234567890";
// 	char buf2[] = "123456";
// 	ft_memmove(buf, buf, 5);
// 	// memmove(buf2 + 3, buf2, 5);
// 	// printf("My f : %s\n", buf);
// 	// printf("Ori f : %s\n", buf2);

// 	printf("%s\n", (char *)buf);
// 	return (0);
// }