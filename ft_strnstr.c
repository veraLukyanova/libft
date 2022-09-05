/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconger <gconger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 00:07:34 by gconger           #+#    #+#             */
/*   Updated: 2021/10/21 00:31:31 by gconger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (!*needle)
		return ((char *)(haystack + i));
	while (i < len && haystack[i])
	{
		k = 0;
		if (haystack[i] == needle[k])
		{
			while (haystack[i + k] == needle[k] && (i + k < len) && needle[k])
				k++;
			if (!needle[k])
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
