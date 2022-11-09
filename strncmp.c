/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:32:17 by ccosta-c          #+#    #+#             */
/*   Updated: 2022/11/09 19:08:44 by ccosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int 	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	
	i = 0;
	while ((!(s1 + i) && !(s2 + i)) && i < n)
	{
		if (*(s1 + i) > *(s2 + i))
		{
			return (*(s1 + i) - *(s2 + i));
			i++;
		}
	}
	return (0);
}

int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "HellO";
	printf("%d", ft_strncmp(str1, str2, 5));
	return (0);
}