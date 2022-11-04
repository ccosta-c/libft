/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta-c <ccosta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:55:20 by ccosta-c          #+#    #+#             */
/*   Updated: 2022/11/04 11:44:49 by ccosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (n >= i)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
