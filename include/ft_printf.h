/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:01:53 by jlecorne          #+#    #+#             */
/*   Updated: 2022/12/02 12:53:35 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft.h"

int		charprinter(int c);
int		pctprinter(void);
int		strprinter(char *s);
int		nbrprinter(int c);
int		unsignedprinter(unsigned int c);
int		hexaprinter(unsigned int c, const char s);
int		ft_printf(const char *s, ...);
int		ptrprinter(unsigned long long c);

void	ft_putchar_fd(char c, int fd);

#endif