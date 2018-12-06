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
** ...
*/

// int		find_pivot(int *arr, int n)
// {
// 	int		ret = -1;
// 	int		sum = 0;
// 	int		lsum = 0;
//
// 	for (int i = 0; i < n; i += 1)
// 		sum += arr[i];
// 	for (int i = 0; i < n; i += 1)
// 	{
// 		sum -= arr[i];
// 		if (lsum == sum)
// 		{
// 			ret = i;
// 			break ;
// 		}
// 		lsum += arr[i];
// 	}
// 	return (ret);
// }

/*
** Main function. Uncomment to test this file!
*/

/*
int 	main(int argc, char const *argv[])
{
	return (0);
}
*/


#include <stdio.h>

static int	get_sum(int *arr, int n)
{
	int		sum = 0;

	for (int i = 0; i < n; i += 1)
		sum += arr[i];
	return (sum);
}

int			find_pivot(int *arr, int n)
{
	int		sum = get_sum(arr, n);
	int		lsum = 0;
	int 	pivot = -1;

	for (int i = 0; (pivot == -1 && i < n); i += 1)
	{
		sum -= arr[i];
		pivot = (lsum == sum) ? i : -1;
		lsum += arr[i];
	}
	return (pivot);
}

int			main(void)
{
	int 	arr[100] =
	{
		1,
		2499,
		881,
		4539,
		46,
		9845,
		7475,
		6007,
		2093,
		6507,
		3342,
		4598,
		789,
		4874,
		3425,
		1421,
		5348,
		2512,
		1095,
		7854,
		8646,
		5788,
		1290,
		8945,
		9902,
		4616,
		7745,
		8669,
		7770,
		9957,
		4844,
		8572,
		9121,
		8460,
		3489,
		4033,
		6955,
		1115,
		9226,
		3770,
		1026,
		1470,
		241,
		2948,
		5633,
		943,
		5029,
		58,
		4609,
		7137,
		8307,
		7464,
		2988,
		9248,
		1660,
		6579,
		7151,
		645,
		1003,
		2298,
		325,
		6268,
		6027,
		5723,
		6214,
		7368,
		3279,
		9742,
		7716,
		5883,
		7180,
		2879,
		7430,
		1984,
		2516,
		1408,
		925,
		3111,
		43,
		1025,
		3744,
		5957,
		9428,
		2309,
		4142,
		1589,
		3677,
		7498,
		8121,
		2884,
		7560,
		3533,
		1116,
		6573,
		5736,
		747,
		8971,
		4126,
		6836,
		4417
	};
	int		n = 100;

	return (printf("pivot: %d\n", find_pivot(arr, n)));
}
