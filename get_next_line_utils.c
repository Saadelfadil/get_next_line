/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 13:09:43 by sel-fadi          #+#    #+#             */
/*   Updated: 2019/11/02 16:09:22 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*ft_strjoin(char *s1, char *s2)
{
	unsigned int	len;
	char			*s3;
	unsigned int	len1;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len = len1 + ft_strlen(s2);
	s3 = (char *)malloc(sizeof(char) * len + 1);
	if (!s3)
		return (NULL);
	ft_strcpy(s3, (char *)s1);
	s3 += len1;
	ft_strcpy(s3, (char *)s2);
	return (s3 - len1);
}

void		*ft_calloc(size_t count, size_t size)
{
	unsigned char			*ptr;
	int						len;
	int						i;

	len = count * size;
	i = 0;
	if (!(ptr = (unsigned char*)malloc(size * count)))
		return (NULL);
	while (i < len)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

char		*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char		*ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == (unsigned char)c)
		return ((char *)str + i);
	return (0);
}

char		*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	s = (char *)malloc((i + 1) * sizeof(char));
	if (s == 0)
		return (0);
	while (s1[j] != '\0')
	{
		s[j] = s1[j];
		j++;
	}
	s[i] = '\0';
	return (s);
}
