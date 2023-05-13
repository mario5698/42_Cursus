/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:32:45 by marancib          #+#    #+#             */
/*   Updated: 2023/05/13 13:44:30 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

int	main(void)
{
	if (ft_strrchr("test", '\0') == NULL)
		printf("NULL");
	else
		printf("%s", ft_strrchr("teste", '\0'));
	return (0);
}
