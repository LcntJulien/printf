/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:17:34 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/26 15:39:29 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	charprinter(char c)
{
	write(1, &c, 1);
	return (1);
}

int	pctprinter(char c)
{
	write(1, '%', 1);
	return (1);
}

int	strprinter(char *s)
{
	int i;

	i = 0;
	while (s[i++])
		write(1, &s[i], 1);
	return (i);
}

int numprinter(int  c)
{
    char *s;
	int	r;

    s = ft_itoa(c);
	r = strprinter(s);
	free(s);
    return (r);
}