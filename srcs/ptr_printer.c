/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:15:31 by jlecorne          #+#    #+#             */
/*   Updated: 2022/12/02 13:04:22 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pprint(unsigned int c)
{
	if (c == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else
	{
		if (c >= 16)
		{
			pprint(c / 16);
			pprint(c % 16);
		}
		else
		{
			if (c <= 9)
				ft_putchar_fd((c + '0'), 1);
			else
				ft_putchar_fd((c - 10 + 'a'), 1);
		}
	}
	return ;
}

int	ptrprinter(unsigned long long c)
{
	int	r;
	int	i;

	r = 0;
	i = c;
	if (!c)
		r += write(1, "0x", 2);
	while (i != 0)
	{
		r++;
		i /= 16;
	}
	pprint(c);
	return (r);
}
