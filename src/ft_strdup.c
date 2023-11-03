/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutoendo <yutoendo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 17:28:45 by yuendo            #+#    #+#             */
/*   Updated: 2023/11/03 23:30:10 by yutoendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strdup(const char *s1)
{
	const char	*p;

	p = malloc(ft_strlen(s1) + 1);
	if (p == NULL)
		return (NULL);
	ft_strlcpy((char *)p, (char *)s1, ft_strlen(s1) + 1);
	return ((char *)p);
}
