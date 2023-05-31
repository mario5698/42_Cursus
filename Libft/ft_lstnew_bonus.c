/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:28:29 by marancib          #+#    #+#             */
/*   Updated: 2023/05/13 14:42:42 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*my_list;

	my_list = (t_list *)malloc(sizeof(t_list));
	if (!(my_list))
		return (NULL);
	my_list->content = content;
	my_list->next = NULL;
	return (my_list);
}
