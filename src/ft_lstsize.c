/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutoendo <yutoendo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 22:58:15 by yutoendo          #+#    #+#             */
/*   Updated: 2023/11/03 23:29:31 by yutoendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int ft_lstsize(t_list *lst)
{
    int lstsize;

    lstsize = 0;
    while(lst){
        lst = lst->next;
        lstsize++;
    }
    return (lstsize);
}