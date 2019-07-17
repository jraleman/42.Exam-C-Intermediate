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

struct 	s_node
{
	int           	value;
	struct s_node 	**nodes;
};

int		height_tree(struct s_node *root)
{
	int	current = 0;
	int	height = 0;

	if (!root)
		return (-1);
	for (int i = 0; root->nodes[i]; i += 1)
		if ((current = height_tree(root->nodes[i]) + 1) > height)
			height = current;
	return (height);
}

/*
#include <stdlib.h>
#include <stdio.h>

int		main(void)
{
	struct s_node *root;

	root = malloc(sizeof(struct s_node));
	root->value = 1;
	root->nodes = malloc(sizeof(struct s_node));

	root->nodes[0] = malloc(sizeof(struct s_node));
	root->nodes[0]->value = 2;
	root->nodes[0]->nodes = malloc(sizeof(struct s_node));

	root->nodes[0]->nodes[0] = malloc(sizeof(struct s_node));
	root->nodes[0]->nodes[0]->value = 3;
	root->nodes[0]->nodes[0]->nodes = malloc(sizeof(struct s_node));

	root->nodes[0]->nodes[0]->nodes[0] = malloc(sizeof(struct s_node));
	root->nodes[0]->nodes[0]->nodes[0]->value = 4;
	root->nodes[0]->nodes[0]->nodes[0]->nodes = malloc(sizeof(struct s_node));

	root->nodes[0]->nodes[0]->nodes[0]->nodes[0] = NULL;

	printf("%d\n", height_tree(root));
	return (0);
}
*/
