/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:47:38 by marancib          #+#    #+#             */
/*   Updated: 2023/05/23 17:47:40 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<stdlib.h>
# include<stdio.h>
# include<unistd.h>
# include<stdarg.h>

int		ft_printf(const char *string, ...);
int		ft_printnbr_hex(unsigned int nbr, char *str);
int		ft_printstr(char *str);
int		ft_counternbr(unsigned int nbr);
int		ft_revstr(char *string, unsigned int size);
int		ft_isuppercase(char c);
int		ft_printadrr_hex(unsigned long nbr);
int		ft_printnbr_dec(unsigned int nb);
int		ft_printnbr(int nbr);
int		ft_printchr(unsigned char c);

#endif
