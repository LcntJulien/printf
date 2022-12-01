/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa_printer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:17:15 by jlecorne          #+#    #+#             */
/*   Updated: 2022/12/01 15:37:02 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	hexprint(unsigned int c, const char s)
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
}

int	hexaprinter(unsigned int c, const char s)
{
	int	r;
	int	i;

	r = 0;
	i = c;
	while (i > 0)
	{
		r++;
		i /= 16;
	}
	hexprint(c, s);
	return (r);
}
