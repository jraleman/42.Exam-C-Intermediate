/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_anagram.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 20:42:51 by jaleman           #+#    #+#             */
/*   Updated: 2018/02/06 20:42:52 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_anagram(char *a, char *b)
{
	int	count_a;
	int	count_b;

	count_a = 0;
	count_b = 0;
	while (*a != '\0' && *b != '\0')
	{
		count_a += *a;
		count_b += *b;
		a += 1;
		b += 1;
	}
	return (count_a == count_b ? 1 : 0);
}
