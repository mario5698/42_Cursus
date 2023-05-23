/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:56:10 by marancib          #+#    #+#             */
/*   Updated: 2023/05/23 12:25:59 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>
#include"../include/libft.h"
#include"../include/ft_printf.h"

int	ft_printstr(char *str)
{
	int	len;

	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}

int	ft_printchr(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printnbr(int nbr)
{
	int	n;
	int	counter;

	n = nbr;
	counter = ft_counternbr(nbr);
	write(1, ft_itoa(nbr), counter);
	return (counter);
}

int	ft_formats(va_list argvs, char c)
{
	int	numprint;

	numprint = 0;
	if (c == 'c')
		numprint = ft_printchr(va_arg(argvs, int));
	else if (c == 's')
		numprint = ft_printstr(va_arg(argvs, char *));
	else if (c == 'p')
		numprint = ft_printadrr_hex(va_arg(argvs, unsigned long));
	else if (c == 'd' || c == 'i')
		numprint = ft_printnbr(va_arg(argvs, int));
	//else if (c == 'i')
	//	numprint = ft_printnbr(va_arg(argvs, int));
	else if (c == 'u')
		numprint = ft_printnbr_dec(va_arg(argvs, int));
	else if (c == 'x' || c == 'X')
		numprint = ft_printnbr_hex(va_arg(argvs, unsigned int), c);
	else if (c == '%')
		numprint = ft_printchr('%');
	return (numprint);
}

int	ft_printf(const char *string, ...)
{
	va_list	argv;
	int		i;
	int		counterchars;

	i = 0;
	counterchars = 0;
	va_start(argv, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			counterchars += ft_formats(argv, string[i+1]);
			i++;
		}
		else
			counterchars += ft_printchr(string[i]);
		i++;
	}
	va_end(argv);
	return (counterchars);
}
