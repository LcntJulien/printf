/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:35:32 by jlecorne          #+#    #+#             */
/*   Updated: 2022/12/02 15:58:37 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include <stdio.h>

int main(void)
{
    int i = 0;

    ft_printf("%c%c%c", 'a', '\t', 'b');
    //printf("\n%d", i = ft_printf("%c%c%c", 'a', '\t', 'b'));
    return (0);
}
