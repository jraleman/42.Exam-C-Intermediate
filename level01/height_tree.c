/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   height_tree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 20:58:59 by jaleman           #+#    #+#             */
/*   Updated: 2019/06/28 00:42:02 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Structure of a node
*/

struct			    s_node
{
  int			      value;
  struct s_node	**nodes;
};

/*
**  ~~ Helping Source ~~
**  https://stackoverflow.com/a/43911296
*/

int				height_tree(struct s_node *root)
{
	int			max = 0;
	int			height = 0;

	if (!root)
		return (-1);
	for (int i = 0; root->nodes[i]; i += 1)
		if ((max = (height_tree(root->nodes[i]) + 1)) > height)
			height = max;
	return (height);
}

/*
#include <stdio.h>
#include <stdlib.h>

struct s_node *new_node(int item)
{
	struct s_node *new = (struct s_node *)malloc(sizeof(struct s_node));
	new->value = item;
	new->nodes = malloc(1000);
	return (new);
}

int main (void)
{
	struct s_node *t = new_node(94);
	t->nodes[0] = new_node(34);
	t->nodes[1] = new_node(52);
	
	t->nodes[0]->nodes[0] = new_node(1);
	t->nodes[0]->nodes[1] = new_node(99);
	t->nodes[0]->nodes[2] = new_node(11);
	
	t->nodes[0]->nodes[1]->nodes[0] = new_node(13);
	
	
	printf("%d", height_tree(t));
	return (0);
}
*/
