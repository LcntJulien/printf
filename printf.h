/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:01:53 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/28 19:30:40 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	charprinter(char c);
int	pctprinter(char c);
int	strprinter(char *s);
int	nbrprinter(char c);
int	unsignedprinter(unsigned int c);
int	hexaprinter(unsigned int c, const char s);

#endif