/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconger <gconger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:14:20 by gconger           #+#    #+#             */
/*   Updated: 2021/10/21 23:11:24 by gconger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				k;
	unsigned char	*str;

	str = (unsigned char *)s;
	k = 0;
	while (s[k] != '\0')
		k++;
	if (str)
	{
		while (str[k] != c && k > 0)
			k--;
		if (str[k] == (char) c)
			return ((char *) & str[k]);
		else
			return (NULL);
	}
	return (NULL);
}
