/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconger <gconger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:19:31 by gconger           #+#    #+#             */
/*   Updated: 2022/03/29 00:29:31 by gconger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last_lst;

	last_lst = lst;
	if (last_lst == NULL)
		return (NULL);
	while (last_lst->next != NULL)
		last_lst = last_lst->next;
	return (last_lst);
}
