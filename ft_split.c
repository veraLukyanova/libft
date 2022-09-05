/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconger <gconger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:16:38 by gconger           #+#    #+#             */
/*   Updated: 2022/01/25 01:21:58 by gconger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

int	ft_count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

void	*ft_free(char **new_str, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free (new_str[i]);
		i++;
	}
	free (new_str);
	return (0);
}

int	ft_word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	return (len);
}

char	**ft_copy_in_new_str(char const *s, char c, int count, char **new_str)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (i < count)
	{
		while (*s == c)
			s++;
		len = ft_word_len(s, c);
		new_str[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (new_str[i] == 0)
			return (ft_free(new_str, count));
		j = 0;
		while (j < len)
		{
			new_str[i][j] = *s;
			j++;
			s++;
		}
		new_str[i][j] = '\0';
		i++;
	}
	new_str[i] = (NULL);
	return (new_str);
}

char	**ft_split(char const *s, char c)
{
	char	**new_str;
	int		count;

	if (!s)
		return (NULL);
	count = ft_count_word(s, c);
	new_str = (char **)malloc(sizeof(char *) * (count + 1));
	if (!new_str)
		return (NULL);
	new_str = ft_copy_in_new_str(s, c, count, new_str);
	return (new_str);
}
