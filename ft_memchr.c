/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconger <gconger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:26:44 by gconger           #+#    #+#             */
/*   Updated: 2021/10/21 22:19:09 by gconger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	sign;

	str = (char *) s;
	sign = (char) c;
	if (n == 0)
		return (NULL);
	i = 0;
	while (n > 0)
	{
		if (str[i] == sign)
			return (str + i);
		i++;
		n--;
	}
	return (NULL);
}
