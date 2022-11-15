/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:50:49 by ccosta-c          #+#    #+#             */
/*   Updated: 2022/11/15 16:21:29 by ccosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		return (NULL);
	}
	if (len >= ft_strlen(s))
	{
		return(NULL);
	}
	new = malloc(sizeof(char) * ((ft_strlen(&s[start]) - len)));
	if (!new)
		return (NULL);
	while (len > 0)
	{
		new[i] = s[start];
		i++;
		start++;
		len--;
	}
	{
		new[i] = s[start + i];
		i++;
		len--;
	}
	new[i] = '\0';
	return (new);
}