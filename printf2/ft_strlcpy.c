/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seykim <seykim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:16:43 by seykim            #+#    #+#             */
/*   Updated: 2023/03/31 16:48:41 by seykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

int	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	real_n;
	size_t	src_len;

	real_n = 0;
	src_len = (size_t)ft_strlen(src);
	if (src == 0 || size == 0)
		return (src_len);
	while (real_n < size -1 && src[real_n])
	{
		dest[real_n] = src[real_n];
		real_n++;
	}
	dest[real_n] = 0;
	while (src[real_n])
		real_n++;
	return (real_n);
}
