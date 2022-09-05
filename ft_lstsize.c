/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconger <gconger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:06:42 by gconger           #+#    #+#             */
/*   Updated: 2022/03/29 00:31:54 by gconger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		len_list;

	len_list = 0;
	tmp = lst;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		len_list++;
	}
	return (len_list);
}
