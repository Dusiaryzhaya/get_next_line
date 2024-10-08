/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anilchen <anilchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:45:59 by anilchen          #+#    #+#             */
/*   Updated: 2024/08/01 17:30:21 by anilchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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

// size_t	ft_strlen(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// char	*ft_strcpy(char *s1, const char *s2)
// {
// 	int	i;

// 	i = 0;
// 	while (s2[i])
// 	{
// 		s1[i] = s2[i];
// 		i++;
// 	}
// 	s1[i] = s2[i];
// 	return (s1);
// }

// char	*ft_strchr(const char *str, int c)
// {
// 	while (*str != '\0')
// 	{
// 		if (*str == (char)c)
// 		{
// 			return ((char *)str);
// 		}
// 		str++;
// 	}
// 	if ((char)c == '\0')
// 	{
// 		return ((char *)str);
// 	}
// 	return (NULL);
// }

// size_t	ft_strlcpy(char *dest, const char *src, size_t size)
// {
// 	size_t	src_len;
// 	size_t	i;

// 	src_len = 0;
// 	i = 0;
// 	while (src[src_len] != '\0')
// 		src_len++;
// 	if (size == 0)
// 		return (src_len);
// 	while (i < size - 1 && src[i] != '\0')
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (src_len);
// }

// char	*ft_strdup(const char *str)
// {
// 	int		size;
// 	int		i;
// 	char	*arr;

// 	i = 0;
// 	size = 0;
// 	if (!str)
// 		return (NULL);
// 	size = ft_strlen(str);
// 	arr = (char *)malloc((size + 1) * sizeof(char));
// 	if (!arr)
// 	{
// 		return (NULL);
// 	}
// 	else
// 	{
// 		while (i < size)
// 		{
// 			arr[i] = str[i];
// 			i++;
// 		}
// 		arr[i] = '\0';
// 	}
// 	return (arr);
// }
