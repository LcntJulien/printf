/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:10:32 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/22 18:59:53 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

int	printer(char c)
{
	write(1, &c, 1);
	return (1);
}

int	deftype(va_list args, const char *type)
{
	int	r;

	r = 0;
	if (type == 'c')
		return (NULL);
	else if (type == 's')
		return (NULL);
	else if (type == 'p')
		return (NULL);
	else if (type == 'd')
		return (NULL);
	else if (type == 'i')
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
			r += printer(*s);
		s++;
	}
	va_end(args);
	return (r);
}