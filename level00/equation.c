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

int		print_digits(int a, int b, int c)
{
	return (printf("A = %d, B = %d, C = %d\n", a, b, c));
}

int		convert_digits(int i, int j, int k)
{
	return (((i * 10) + j) + ((k * 10) + i));
}


int		check_digits(int n, int i, int j, int k)
{
	return ((convert_digits(i, j, k) == n) ? 1 : 0);
}

void	equation(int n)
{
	if (n < 1)
		print_digits(0, 0, 0);
	else
		for (int i = 0; i < 10; i += 1)
			for (int j = 0; j < 10; j += 1)
				for (int k = 0; k < 10; k += 1)
					if (check_digits(n, i, j, k))
						print_digits(i, j, k);
	return ;
}

/*
#include <stdlib.h>

int 	main(int argc, const char *argv[])
{
	equation(atoi(argv[1]));
	return (0);
}
*/
