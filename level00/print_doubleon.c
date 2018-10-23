/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_doubleon.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 21:44:52 by jaleman           #+#    #+#             */
/*   Updated: 2018/10/22 21:44:53 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    print_doublon(int *a, int na, int *b, int nb)
{
    int counter_a = 0;
    int counter_b = 0;
    int total_elm = 0;

    while (na > counter_a && nb > counter_b)
    {
        if (a[counter_a] == b[counter_b])
        {
            if (total_elm > 0)
                printf(" ");
            printf("%i", a[counter_a]);
            counter_a += 1;
            counter_b += 1;
            total_elm += 1;
        }
        else if (a[counter_a] > b[counter_b])
            counter_b += 1;
        else
            counter_a += 1;
    }
    printf("\n");
    return ;
}

/*
int     main(int argc, char const *argv[])
{
    int a[] = { -5,  2, 10, 15, 50, 70, 100, 200, 300, 1200, 5000 };
    int b[] = { 2,  4,  5,  6,  7, 10,  40,  70 };
    int na = 11;
    int nb = 8;

    print_doublon(a, na, b, nb);
    return (0);
}
*/
