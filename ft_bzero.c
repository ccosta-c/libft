/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:59:34 by ccosta-c          #+#    #+#             */
/*   Updated: 2022/11/08 11:01:02 by ccosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The  bzero()  function  erases the data in the n bytes of the memory starting at the
// location pointed to by s, by writing zeros (bytes containing '\0') to that area.

void	ft_bzero(void *s, size_t n)
{
	size_t	i;	

	i = 0;
	if (!s)
	{
		return ;
	}
	while (n > i)
	{
		*(char*)(s + i) = 0;
		i++;
	}
}
