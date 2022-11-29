/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_printers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:17:34 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/29 18:36:57 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

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
	while (s[i++])
		write(1, &s[i], 1);
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
