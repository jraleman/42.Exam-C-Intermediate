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

/*
** Print to stdout all the numbers that are present in both arrays that are
** passed as parameter.
** The numbers are separated by a space, and a new line at the end.
*/

void	print_doublon(int *a, int na, int *b, int nb)
{
	int	i = 0;
	int	j = 0;
	int	total = 0;

	while (na > i && nb > j)
	{
		if (a[i] == b[j])
		{
			if (total > 0)
				printf(" ");
			printf("%i", a[i]);
			i += 1;
			j += 1;
			total += 1;
		}
		else if (a[i] > b[j])
			j += 1;
		else
			i += 1;
	}
	printf("\n");
	return ;
}

/*
** Main function. Uncomment to test this file!
*/

/*
int     main(void)
{
	int a[] = { -5,  2, 10, 15, 50, 70, 100, 200, 300, 1200, 5000 };
	int b[] = { 2,  4,  5,  6,  7, 10,  40,  70 };
	int na = 11;
	int nb = 8;

	print_doublon(a, na, b, nb);
	return (0);
}
*/
