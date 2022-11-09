/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:33:29 by ccosta-c          #+#    #+#             */
/*   Updated: 2022/11/09 18:03:04 by ccosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	d = dst_len;
	if (dst_len < (size - 1) && size > 0)
	{
		while (!(src + i) && dst_len < size - 1)
		{
			*(dst + d) = *(src + i);
			i++;
			d++;
		}
		*(dst + d) = '\0';
	}
	if (dst_len >= size)
	{
		dst_len = size;
	}
	return (dst_len + src_len);
}
