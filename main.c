/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:35:32 by jlecorne          #+#    #+#             */
/*   Updated: 2022/12/02 11:37:38 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include <stdio.h>

int main(void)
{
    int i = 0;

    printf("Retour print : %d\n", i = ft_printf("%c", 'x'));
    return (0);
}
