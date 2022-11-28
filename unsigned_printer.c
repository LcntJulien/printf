/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_printer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:40:26 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/28 19:03:55 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	nbrlen(long n)
{
	size_t	r;

	r = 0;
	while (n >= 1)
	{
		r++;
		n /= 10;
	}
	return (r);
}

char	*unsigned_itoa(unsigned int c)
{
	int		i;
	char	*r;

	i = nbrlen(c);
	if (c == 0)
		return (r = ft_strdup("0"));
	r = malloc(sizeof(char) * (i + 1));
	if (!r)
		return (NULL);
	r[i] = '\0';
	while (--i >= 0)
	{
		r[i] = (c % 10) + '0';
		c /= 10;
	}
	return (r);
}

int	unsignedprinter(unsigned int c)
{
	int r;
	char print;

	r = 0;
	print = unsigned_itoa(c);
	r += strprinter(print);
	free(print);
}