/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:01:53 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/29 17:52:09 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	charprinter(int c);
int	pctprinter(void);
int	strprinter(char *s);
int	nbrprinter(int c);
int	unsignedprinter(unsigned int c);
int	hexaprinter(unsigned int c, const char s);

#endif