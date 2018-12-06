/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_of_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 23:36:29 by jaleman           #+#    #+#             */
/*   Updated: 2018/10/22 23:36:29 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ...
*/

static void	count_number(int nb, int *count)
{
		if (nb >= 10)
		{
				count_number(nb / 10, count);
				count_number(nb % 10, count);
		}
		if (nb == 2)
				*count += 1;
		return ;
}

/*
** ...
*/

int			count_of_2(int nb)
{
		int i;
		int count;

		i = 1;
		count = 0;
		while (++i <= nb)
				count_number(i, &count);
		return (count);
}

/*
#include <stdio.h>

int main(void)
{
		printf("%i\n", count_of_2(25));
		return (0);
}
*/
