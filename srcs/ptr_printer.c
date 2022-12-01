/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:15:31 by jlecorne          #+#    #+#             */
/*   Updated: 2022/12/01 17:19:08 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pprint(unsigned int c)
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
			hexprint(c / 16);
			hexprint(c % 16);
		}
		else
		{
			if (c <= 9)
				ft_putchar_fd(c, 1);
			else
				ft_putchar_fd(c, 1);
		}
	}
}

int	ptrprinter(unsigned int c)
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
	pprint(c);
	return (r);
}
