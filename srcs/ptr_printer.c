/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:15:31 by jlecorne          #+#    #+#             */
/*   Updated: 2022/12/01 15:39:53 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int pprint(unsigned int c)
{
    int r;
}

int	ptrprinter(unsigned int c)
{
	int	r;
    int i;

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
