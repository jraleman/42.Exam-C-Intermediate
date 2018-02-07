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

int		find_pivot(int *arr, int n)
{
	int		ret = -1;
	int		sum = 0;
	int		left_sum = 0;

	for (int i = 0; i < n; i += 1)
		sum += arr[i];
	for (int i = 0; i < n; i += 1)
	{
		sum -= arr[i];
		if (left_sum == sum)
		{
			ret = i;
			break ;
		}
		left_sum += arr[i];
	}
	return (ret);
}
