/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa_printer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:17:15 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/28 19:04:01 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int hexprint(unsigned int c, const char s)
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
            hexprint((c / 16), s);
            hexprint((c % 16), s);
	    }
	    else
	    {
		    if (c <= 9)
			    write(1, (c + '0'), 1);
		    else
		    {
			    if (s == 'x')
				    write(1, (c - 10 + 'a'), 1);
			    if (s == 'X')
				    write(1, (c - 10 + 'A'), 1);
		    }
	    }
    }
}

int	hexaprinter(unsigned int c, const char s)
{
	int	r;

	r = 0;
	while (c > 0)
	{
		r++;
		c /= 16;
	}
    hexprint(c, s);
	return (r);
}