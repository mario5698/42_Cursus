/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:24:23 by marancib          #+#    #+#             */
/*   Updated: 2023/05/15 16:24:24 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp;

	count = 0;
	temp = lst;
	if (!(lst))
		return (0);
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
