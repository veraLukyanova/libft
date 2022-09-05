/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconger <gconger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:42:37 by gconger           #+#    #+#             */
/*   Updated: 2021/10/19 18:27:37 by gconger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	size_t				i;
	unsigned char		*dst1;
	unsigned char const	*src1;

	dst1 = (unsigned char *) dst;
	src1 = (unsigned const char *) src;
	if (dst1 == src1 || size == '0')
		return (0);
	i = 0;
	if (src < dst)
	{
		while (size--)
		{
			dst1[size] = src1[size];
		}
	}
	else
	{
		while (size-- > 0)
		{
			dst1[i] = src1[i];
			i++;
		}
	}
	return (dst);
}
