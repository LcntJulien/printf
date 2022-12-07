/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_printers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:17:34 by jlecorne          #+#    #+#             */
/*   Updated: 2022/12/07 16:39:12 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	charprinter(int c)
{
	write(1, &c, 1);
	return (1);
}

int	pctprinter(void)
{
	write(1, "%", 1);
	return (1);
}

int	strprinter(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	nbrprinter(int c)
{
	char	*s;
	int		r;

	s = ft_itoa(c);
	r = strprinter(s);
	free(s);
	return (r);
}
