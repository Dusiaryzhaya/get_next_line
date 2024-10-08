/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anilchen <anilchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:57:55 by anilchen          #+#    #+#             */
/*   Updated: 2024/07/31 15:46:38 by anilchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		len_s1;
	int		len_s2;
	char	*strjoin;

	len_s1 = 0;
	len_s2 = 0;
	if (!s1 && !s2)
		return (NULL);
	if (s1)
		len_s1 = ft_strlen(s1);
	if (s2)
		len_s2 = ft_strlen(s2);
	strjoin = (char *)malloc(len_s1 + len_s2 + 1);
	if (!strjoin)
	{
		return (NULL);
	}
	if (s1)
		ft_memcpy(strjoin, s1, len_s1);
	if (s2)
		ft_memcpy(strjoin + len_s1, s2, len_s2);
	strjoin[len_s1 + len_s2] = '\0';
	return (strjoin);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*sc;

	i = 0;
	if (!dest || !src)
	{
		return (NULL);
	}
	if (num == 0)
	{
		return (dest);
	}
	dst = (unsigned char *)dest;
	sc = (const unsigned char *)src;
	while (i < num)
	{
		dst[i] = sc[i];
		i++;
	}
	return (dst);
}

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			return ((char *)str);
		}
		str++;
	}
	if ((char)c == '\0')
	{
		return ((char *)str);
	}
	return (NULL);
}

char	*ft_strdup(const char *str)
{
	int		size;
	int		i;
	char	*arr;

	i = 0;
	size = 0;
	if (!str)
		return (NULL);
	size = ft_strlen(str);
	arr = (char *)malloc((size + 1) * sizeof(char));
	if (!arr)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			arr[i] = str[i];
			i++;
		}
		arr[i] = '\0';
	}
	return (arr);
}
