/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconger <gconger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 01:04:33 by gconger           #+#    #+#             */
/*   Updated: 2021/10/21 03:41:08 by gconger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = (void *)malloc(count * size);
	if (!(str))
		return (NULL);
	ft_bzero (str, count * size);
	return ((void *)str);
}
