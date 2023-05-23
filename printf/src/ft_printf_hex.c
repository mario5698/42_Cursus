/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:22:36 by marancib          #+#    #+#             */
/*   Updated: 2023/05/23 12:27:47 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/libft.h"
#include"../include/ft_printf.h"

int	ft_printnbr_hex(unsigned int nbr, char c)
{
	char			*nums;
	unsigned char	character;
	int				len;
	int				i;

	i = 0;
	character = 0;
	len = ft_counternbr(nbr);
	nums = malloc(sizeof(char) * len);
	while (nbr != 0)
	{
		character = nbr % 16;
		if (character < 10)
			character += 48;
		else if (ft_isuppercase(c))
			character += 55;
		else
			character += 55 + 32;
		nums[i++] = character;
		nbr = nbr / 16;
	}
	ft_revstr(nums, len);
	nums++;
	ft_printf("%s", nums);
	return (len);
}

int	ft_printadrr_hex(unsigned long nbr)
{
	char	*nums; 
	int		len;
	int		i;
	char	character;
	int		counter;
	counter = 0;
	i = 0;
	character = 0;
	len = ft_counternbr(nbr) ;
	nums = malloc(sizeof(char) * len);
	while (i < len - 1)
	{
		character = nbr % 16;
		if (character < 10)
			character += 48;
		else
			character += 55 + 32;
		nums[i++] = character;
		nbr = nbr / 16;
	}
	ft_revstr(nums, len);
	counter = ft_printf("0x%s", nums);
	return (counter);
}

int	ft_printnbr_oct(int nbr)
{
	int		tmp;
	char	*numsoct;
	int		len;
	char	character;
	int		i;

	i = 0;
	tmp = 0;
	character = 0;
	len = ft_counternbr(nbr)+1; 
	numsoct = malloc(sizeof(char) * len);
	while (nbr != 0)
	{
		character = nbr % 8;
		if (character < 10)
			character += 48;
		numsoct[i++] = character;
		nbr = nbr / 8;
	}
	ft_revstr(numsoct, len);
	ft_printf("%s",numsoct);
	free(numsoct);
	return (len);
}

int	ft_printnbr_dec(int nbr)
{
	int		len;
	char	*tmp;
	int		i;
	int		result;

	i = 0;
	len = ft_counternbr(nbr);
	tmp = ft_itoa(nbr);
	while (len)
	{
		tmp[i] = (tmp[i] * 2 ^ len) + '0';
		len--;
		i++;
	}
	result = ft_atoi(tmp);
	ft_printf("%d",result);
	return (result);
}
