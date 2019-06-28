/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 00:09:27 by jaleman           #+#    #+#             */
/*   Updated: 2018/10/23 00:09:28 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
** Returns true if a character is alphabetical.
*/

static int	is_alpha(int c)
{
	return (c >= 'a' && c <= 'z');
}

/*
** Lowcase a string passed as parameter.
*/

static char	*lowcase(char *str)
{
	for (int i = 0; str[i]; i += 1)
		str[i] += (str[i] >= 'A' && str[i] <= 'Z') ? 32 : 0;
	return (str);
}

/*
** Takes a string and displays the number of occurences of its alpha characters.
** Other characters are not counted. The printed characters must follow the
** order of occurence in the string. The display must end by a newline. 
*/

static int  count_alpha(char *s)
{
	int		tab[26] = {0};
	char	*str = lowcase(s);
	int		total = 0;
	int		i = -1;

	while (str[++i])
		tab[str[i] - 'a'] += (is_alpha(str[i]) ? 1 : 0);
	i = -1;
	while (str[++i])
	{
		if (tab[str[i] - 'a'] > 0)
		{
			if (total > 0)
				printf(", ");
			printf("%d%c", tab[str[i] - 'a'], str[i]);
			tab[str[i] - 'a'] = 0;
			total += 1;
		}
	}
	return (0);
}

/*
** Main function.
** This is a program, so this one is needed.
** DO NOT COMMENT :)
*/

int         main(int argc, char *argv[])
{
	if (argc == 2)
		count_alpha(argv[1]);
	printf("\n");
	return (0);
}
