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
		int	i = -1;
		int table[127] = {0};

		while (*a != '\0')
		{
				table[(int)*a] += 1;
				a += 1
		}
		while (*b != '\0')
		{
				table[(int)*b] -= 1;
				b += 1
		}
		while (++i < 126)
				if (table[i] != 0)
					break ;
		return (i < 126 ? 0 : 1);
}

/*
#include <stdio.h>

int 	main(void)
{
		char 	*a = "cinema";
		char	*b = "iceman";

		printf("%s\n", (is_anagram(a, b) ? "Anagram" : "Nada"));
		return (0);
}
*/
