/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:01:53 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/30 20:34:02 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		charprinter(int c);
int		pctprinter(void);
int		strprinter(char *s);
int		nbrprinter(int c);
int		unsignedprinter(unsigned int c);
int		hexaprinter(unsigned int c, const char s);

void	ft_putchar_fd(char c, int fd);

#endif