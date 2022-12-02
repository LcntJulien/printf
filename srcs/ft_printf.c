/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:10:32 by jlecorne          #+#    #+#             */
/*   Updated: 2022/12/02 11:42:07 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	deftype(va_list args, const char type)
{
	int	r;

	r = 0;
	if (type == 'c')
		r += charprinter(va_arg(args, int));
	else if (type == '%')
		r += pctprinter();
	else if (type == 's')
		r += strprinter(va_arg(args, char *));
	else if (type == 'p')
		r += ptrprinter(va_arg(args, unsigned int));
	else if (type == 'd' || type == 'i')
		r += nbrprinter(va_arg(args, int));
	else if (type == 'u')
		r += unsignedprinter(va_arg(args, unsigned int));
	else if (type == 'x' || type == 'X')
		r += hexaprinter(va_arg(args, unsigned int), type);
	return (r);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		r;

	r = 0;
	va_start(args, s);
	while (*s)
	{
		if (!s)
			return (r);
		if (*s == '%')
		{
			printf("Valeur de l'itération de s : %c\n", (*s + 1));
			r += deftype(args, (*s + 1));
			s++;
		}
		else
			r += charprinter(*s);
		s++;
	}
	va_end(args);
	return (r);
}
