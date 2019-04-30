/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 20:03:00 by jaleman           #+#    #+#             */
/*   Updated: 2018/02/08 20:03:01 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
** Prints the values of the digits to the stdout.
*/

static void	print_digits(int a, int b, int c)
{
	printf("A = %d, B = %d, C = %d\n", a, b, c);
	return ;
}

/*
** Return the result of the following equation: AB + CA = n
*/

static int	calculate_digits(int a, int b, int c)
{
	return (((a * 10) + b) + ((c * 10) + a));
}

/*
** Check if the equation is balanced, and return true if it does.
*/

static int	check_digits(int n, int a, int b, int c)
{
	return ((calculate_digits(a, b, c) == n) ? 1 : 0);
}

/*
** If the equation is balanced, zero (0), prints to stdout all the possible
** values of A, B, C
*/

void		equation(int n)
{
	for (int i = 0; i < 10; i += 1)
		for (int j = 0; j < 10; j += 1)
			for (int k = 0; k < 10; k += 1)
				if (check_digits(n, i, j, k))
					print_digits(i, j, k);
	return ;
}

/*
** Main function. Uncomment to test this file!
*/

/*
#include <stdlib.h>

int 	main(int argc, const char *argv[])
{
	if (argc == 2)
		equation(atoi(argv[1]));
	return (0);
}
*/
