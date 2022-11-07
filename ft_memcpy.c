/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:07:21 by ccosta-c          #+#    #+#             */
/*   Updated: 2022/11/07 13:36:17 by ccosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The  memcpy()  function  copies  n bytes from memory area src to memory
//	area dest.  The memory areas must not overlap.

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
	{
		return (NULL);
	}
	while (i < n)
	{
		*(char*)(dest + i) = *(char*)(src + i);
		i++;

	}
	return (dest);
}
