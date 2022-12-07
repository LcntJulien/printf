/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:15:31 by jlecorne          #+#    #+#             */
/*   Updated: 2022/12/07 12:28:49 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptrlen(uintptr_t c)
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

void	pprint(uintptr_t c)
{
	if (c >= 16)
	{
		pprint(c / 16);
		pprint(c % 16);
	}
	else
	{
		if (c < 10)
			ft_putchar_fd((c + '0'), 1);
		else
			ft_putchar_fd((c - 10 + 'a'), 1);
	}
	return ;
}

int	ptrprinter(unsigned long long c)
{
	int	r;

	r = 0;
	r += write(1, "0x", 2);
	if (c == 0)
		r += write(1, "0", 1);
	else
	{
		pprint(c);
		r += ptrlen(c);
	}
	return (r);
}
