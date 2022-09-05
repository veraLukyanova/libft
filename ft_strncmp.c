/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconger <gconger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:25:09 by gconger           #+#    #+#             */
/*   Updated: 2021/10/20 22:00:43 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while ((unsigned char) *s1 == (unsigned char) *s2 && n -- > 1)
	{
		if (*s1 != '\0')
		{
			s1++;
			s2++;
		}
	}
	if ((unsigned char) *s1 == (unsigned char) *s2)
		return (0);
	else
		return ((unsigned char) *s1 - (unsigned char) *s2);
}
