/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_tree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 21:59:06 by jaleman           #+#    #+#             */
/*   Updated: 2018/09/05 21:59:07 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

struct           s_node
{
	int            value;
	struct s_node  *right;
	struct s_node  *left;
};

/*
**  ~~ Helping Source ~~
**  https://stackoverflow.com/a/9460287
*/

void             reverse_tree(struct s_node *root)
{
  if (root != NULL)
  {
    struct s_node *tmp;

    tmp = root->right;
    root->right = root->left;
    root->left = tmp;
    reverse_tree(root->left);
    reverse_tree(root->right);
  }
  return ;
}
