/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:37:00 by ccosta-c          #+#    #+#             */
/*   Updated: 2022/11/09 18:20:22 by ccosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*original;
	int			i;

	original = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *original && *s != c)
	{
		s--;
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	return (0);
}
