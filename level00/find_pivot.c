/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 20:41:29 by jaleman           #+#    #+#             */
/*   Updated: 2018/02/06 20:41:31 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Get the total sum of all the values in an int array.
*/

static int	get_sum(int *arr, int n)
{
	int		sum;

	sum = 0;
	for (int i = 0; i < n; i += 1)
		sum += arr[i];
	return (sum);
}

/*
** Return the pivot index of an array, where the sum of the values on the
** left is equal to the sum on the right.
*/

int			find_pivot(int *arr, int n)
{
	int		count = 0;
	int 	pivot = -1;
	int		sum = get_sum(arr, n);

	for (int i = 0; (pivot == -1 && i < n); i += 1)
	{
		sum -= arr[i];
		pivot = (count == sum) ? i : -1;
		count += arr[i];
	}
	return (pivot);
}

/*
** Main function. Uncomment to test this file!
*/

/*
#include <stdio.h>
#include <stdlib.h>

int 		main(int argc, const char *argv[])
{
	int		*arr = malloc(sizeof(int) * (argc - 1));

	for (int i = 0; (argc - 1) > i;  i += 1)
		arr[i] = atoi(argv[i + 1]);
	return (printf("Pivot: %d\n", find_pivot(arr, argc - 1)));
}
*/
