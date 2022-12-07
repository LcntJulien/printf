/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa_printer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:17:15 by jlecorne          #+#    #+#             */
/*   Updated: 2022/12/07 12:28:44 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexlen(unsigned int c)
{
	int	i;

	i = 0;
	while (c != 0)
	{
		i++;
		c /= 16;
	}
	return (i);
}

void	hexprint(unsigned int c, const char s)
{
	if (c >= 16)
	{
		hexprint((c / 16), s);
		hexprint((c % 16), s);
	}
	else
	{
		if (c <= 9)
			ft_putchar_fd((c + '0'), 1);
		else
		{
			if (s == 'x')
				ft_putchar_fd((c - 10 + 'a'), 1);
			if (s == 'X')
				ft_putchar_fd((c - 10 + 'A'), 1);
		}
	}
}

int	hexaprinter(unsigned int c, const char s)
{
	int	r;

	r = 0;
	if (c == 0)
		return (r = write(1, "0", 1));
	else
	{
		r += hexlen(c);
		hexprint(c, s);
	}
	return (r);
}
