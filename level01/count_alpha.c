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

static int  is_alpha(int c)
{
    return (c >= 'a' && c <= 'z');
}

static char	*lowcase_str(char *str)
{
  	int		i = -1;

  	while (str[++i])
        str[i] += (str[i] >= 'A' && str[i] <= 'Z') ? 32 : 0;
  	return (str);
}

static int  count_alpha(char *str)
{
    int     alpha_tab[26] = {0};
    char    *alpha_str = lowcase_str(str);
    int     alpha_total = 0;
    int     i = -1;

    while (alpha_str[++i])
        alpha_tab[alpha_str[i] - 'a'] += (is_alpha(alpha_str[i]) ? 1 : 0);
    i = -1;
    while (alpha_str[++i])
    {
        if (alpha_tab[alpha_str[i] - 'a'] > 0)
        {
            if (alpha_total > 0)
                printf(", ");
            printf("%d%c", alpha_tab[alpha_str[i] - 'a'], alpha_str[i]);
            alpha_tab[alpha_str[i] - 'a'] = 0;
            alpha_total += 1;
        }
    }
    return (0);
}

int       main(int argc, char const *argv[])
{
    if (argc == 2)
        count_alpha((char *)argv[1]);
    printf("\n");
    return (0);
}
