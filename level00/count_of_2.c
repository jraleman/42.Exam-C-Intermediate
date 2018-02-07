/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_of_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 20:59:20 by jaleman           #+#    #+#             */
/*   Updated: 2018/02/06 20:59:21 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Source: https://stackoverflow.com/q/20945790
// Fails test 9 :(

int		count_of_2(int n)
{
	int	count;
	int msb;
	int	power;
	int	leftover;

	count = 0;
	power = 1;
	if (n > 2)
	{
		while (power * 10 < n)
			power *= 10;
		msb = n / power;
		leftover = n % power;
		if (msb > 2)
			count += power;
		if (msb == 2)
			count += leftover + 1;
		count += msb * count_of_2(power);
		count += count_of_2(leftover);
	}
	return (count);
}
