/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   height_tree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 20:58:59 by jaleman           #+#    #+#             */
/*   Updated: 2018/09/05 20:59:00 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

struct					s_node
{
  int						value;
  struct s_node	**nodes;
};

/*
**  ~~ Helping Source ~~
**  https://stackoverflow.com/a/43911296
*/

int				height_tree(struct s_node *root)
{
		int		tmp = 0;
		int		height = 0;

		if (root != NULL)
    {
      for (int i = 0; root->nodes[i]; i += 1)
      {
          tmp = height_tree(root->nodes[i]) + 1;
          if (tmp > height)
            height = tmp;
      }
    }
		return (height);
}
