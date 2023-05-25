/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuendo <yuendo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:28:54 by yuendo            #+#    #+#             */
/*   Updated: 2023/05/25 17:53:14 by yuendo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;
	size_t	strlen;

	strlen = ft_strlen(s);
	i = 0;
	while (i < strlen)
	{
		f(i, &s[i]);
		i++;
	}
}
