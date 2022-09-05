/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconger <gconger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:29:56 by gconger           #+#    #+#             */
/*   Updated: 2021/10/23 16:13:52 by gconger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_i_len(int n)
{
	int	i_len;

	i_len = 0;
	if (n == 0)
		return (1);
	else if (n == -2147483648)
		return (11);
	else if (n < 0)
	{
		i_len++;
		n = n * -1;
	}
	while (n > 0)
	{	
		n = n / 10;
		i_len++;
	}
	return (i_len);
}

char	*ft_converted(char *new_str, int len_n, int n)
{
	new_str[len_n--] = 0;
	if (n == 0)
		new_str[len_n] = '0';
	else if (n < 0)
	{
		new_str[0] = '-';
		if (n == -2147483648)
		{
			new_str[1] = '2';
			n = 147483648;
		}
		else
			n = n * -1;
	}
	while (n > 0)
	{
		new_str[len_n] = n % 10 + '0';
		n = n / 10;
		len_n--;
	}
	return (new_str);
}

char	*ft_itoa(int n)
{
	int		len_n;
	char	*new_str;

	len_n = ft_i_len(n);
	new_str = (char *)malloc(sizeof(char) * (len_n + 1));
	if (!new_str)
		return (0);
	new_str[len_n] = '\0';
	new_str = ft_converted(new_str, len_n, n);
	return (new_str);
}
