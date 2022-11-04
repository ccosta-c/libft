/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta-c <ccosta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:26:13 by ccosta-c          #+#    #+#             */
/*   Updated: 2022/11/04 11:17:19 by ccosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t  ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        i++; 
    }
    return (i);
}
