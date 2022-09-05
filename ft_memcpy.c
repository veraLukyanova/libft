/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconger <gconger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:42:10 by gconger           #+#    #+#             */
/*   Updated: 2021/10/14 13:43:15 by gconger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst2;
	unsigned char	*src2;

	src2 = (unsigned char *) src;
	dst2 = (unsigned char *) dst;
	if (src || dst)
	{
		i = 0;
		while (i < n)
		{
			dst2[i] = src2[i];
			i++;
		}
		return (dst);
	}
	return (0);
}
