/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:55:20 by ccosta-c          #+#    #+#             */
/*   Updated: 2022/11/09 12:04:59 by ccosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The  memset()  function  fills  the  first  n  bytes of the memory area
//	pointed to by s with the constant byte c.

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n >= i)
	{
		*(char *)(s + i) = c;
		i++;
	}
	return (s);
}
