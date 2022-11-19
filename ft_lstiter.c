/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:13:00 by ccosta-c          #+#    #+#             */
/*   Updated: 2022/11/19 15:45:24 by ccosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;
	t_list	*next;

	if (lst == NULL || f == NULL)
	{
		return ;
	}
	current = lst;
	while (current != NULL)
	{
		next = current->next;
		(f)(current->content);
		current = next;
	}
}
