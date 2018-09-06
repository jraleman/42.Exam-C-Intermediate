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

static int	join_digits(int left_digit, int right_digit)
{
	return ((left_digit * 10) + right_digit);
}

static void print_values(int a, int b, int c)
{
	printf("A = %d, ", a);
	printf("B = %d, ", b);
	printf("C = %d", c);
	printf("\n");
	return ;
}

void equation(int n)
{
	int	num_a = 0;
	int	num_b = 0;
	int	num_c = 0;
	int	total_sum = 0;

	while (num_a < 10)
	{
		while (num_b < 10)
		{
			while (num_c < 10)
			{
				total_sum = join_digits(num_a, num_b) + join_digits(num_c, num_a);
				if (total_sum == n)
					print_values(num_a, num_b, num_c);
				num_c += 1;
			}
			num_c = 0;
			num_b += 1;
		}
		num_b = 0;
		num_a += 1;
	}
	return ;
}
