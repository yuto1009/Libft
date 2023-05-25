/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuendo <yuendo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:36:49 by yuendo            #+#    #+#             */
/*   Updated: 2023/05/25 12:28:52 by yuendo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char **ft_split(char const *s, char c){
//     unsigned int len;
//     unsigned int i;
//     char **array;

//     if (!s || !c)
//         return(NULL);
//     len = 1;
//     i = 0;
//     while(s[i]){
//         if (i > 0 && s[i] == c){
//             len++;
//             while(s[i] == c)
//                 i++;
//         }
//         i++;
//     }
//     array = (char *)malloc(len);
//     if(!array)
//         return(NULL);
//     i = 0;
//     while(s[i]){
//         while(s[i] == c)
//             i++;
//         *array = malloc(ft_strlen(ft_substr(s, 0, ))
//     }
// }