/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:10:32 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/26 12:23:07 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

int	deftype(va_list args, const char *type)
{
	int	r;

	r = 0;
	if (type == 'c')
		return (NULL);
	else if (type == 's')
		return (NULL);
	else if (type == 'p' )
		return (NULL);
	else if (type == 'd' || type == 'i')
		return (NULL);
	else if (type == 'u')
		return (NULL);
	else if (type == 'x')
		return (NULL);
	else if (type == 'X')
		return (NULL);
	else if (type == '%')
		return (NULL);
	return (r);
}

ft_printf(const char *s, ...)
{
	va_list args;
	int r;

	r = 0;
	va_start(args, s);
	while (*s)
	{
		if (!s)
			return (NULL);
		if (*s == '%')
		{
			r += deftype(args, *s);
			s++;
		}
		else
			r += charprinter(*s);
		s++;
	}
	va_end(args);
	return (r);
}