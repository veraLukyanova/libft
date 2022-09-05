/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconger <gconger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 03:45:56 by gconger           #+#    #+#             */
/*   Updated: 2021/10/21 04:09:05 by gconger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str2;
	size_t	i;

	str2 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	i = 0;
	if (str2)
	{
		while (i < ft_strlen(s1))
		{
			str2[i] = s1[i];
			i++;
		}
		str2[i] = '\0';
		return (str2);
	}
	else
		return (NULL);
}
