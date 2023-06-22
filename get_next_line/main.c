/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:51:14 by marancib          #+#    #+#             */
/*   Updated: 2023/05/25 15:51:15 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"
#include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
#include<fcntl.h>

int	main(void)
{
	int		fd;
	char	buff[1024];

	fd = open("example.txt", O_RDONLY);

	printf("\n\n%s\n\n",get_next_line(fd));
}
