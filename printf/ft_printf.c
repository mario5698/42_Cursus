/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:56:10 by marancib          #+#    #+#             */
/*   Updated: 2023/06/06 21:57:38 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include"ft_printf.h"

static int	ft_hex(unsigned int nbr, int c)
{
	int	num;

	if (c == 'X')
		num = ft_printnbr_hex(nbr, "0123456789ABCDEF");
	else
		num = ft_printnbr_hex(nbr, "0123456789abcdef");
	return (num);
}

int	ft_formats(va_list argvs, char c)
{
	int	numprint;

	numprint = 0;
	if (c == 'c')
		numprint = ft_printchr((char)va_arg(argvs, int));
	else if (c == 's')
		numprint = ft_printstr(va_arg(argvs, char *));
	else if (c == 'd' || c == 'i')
		numprint = ft_printnbr(va_arg(argvs, int));
	else if (c == 'x' || c == 'X')
		numprint += ft_hex(va_arg(argvs, int), c);
	else if (c == 'p')
		numprint = ft_printadrr_hex(va_arg(argvs, unsigned long));
	else if (c == '%')
		numprint = ft_printchr('%');
	else if (c == 'u')
		numprint = ft_printnbr_dec(va_arg(argvs, int));
	return (numprint);
}

int	ft_printf(const char *string, ...)
{
	va_list	argv;
	int		i;
	int		counterchars;
	int		tmp;

	tmp = 0;
	i = 0;
	counterchars = 0;
	va_start(argv, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
			tmp = ft_formats(argv, string[++i]);
		else
			tmp = ft_printchr(string[i]);
		if (tmp == -1)
			return (-1);
		else
			counterchars += tmp;
		i++;
	}
	va_end(argv);
	return (counterchars);
}
