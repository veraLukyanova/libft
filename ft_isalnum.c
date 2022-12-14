/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconger <gconger@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:27:58 by gconger           #+#    #+#             */
/*   Updated: 2021/10/13 20:35:57 by gconger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int z)
{
	if ((z >= 65 && z <= 90) || (z >= 97 && z <= 122))
		return (1);
	if (z >= '0' && z <= '9')
		return (1);
	else
		return (0);
}
