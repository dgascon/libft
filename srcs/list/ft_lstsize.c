/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgascon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 09:45:21 by dgascon           #+#    #+#             */
/*   Updated: 2020/12/02 09:45:22 by dgascon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"

int	ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
