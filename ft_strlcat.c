/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconger <gconger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:44:24 by gconger           #+#    #+#             */
/*   Updated: 2021/10/14 16:22:34 by gconger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	while (len < size && dst[len])
		len++;
	if (len < size)
	{
		size--;
		while (len < size && *src)
			dst[len++] = *(src++);
		dst[len] = '\0';
	}
	while (*(src++))
		len++;
	return (len);
}
