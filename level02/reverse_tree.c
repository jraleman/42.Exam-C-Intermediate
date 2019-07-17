/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_tree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 10:24:21 by exam              #+#    #+#             */
/*   Updated: 2019/07/16 10:53:36 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_node {
	int           value;
	struct s_node *right;
	struct s_node *left;
};

void	reverse_tree(struct s_node *root)
{
	struct s_node *tmp;

	if (root) {
		tmp = root->right;
		root->right = root->left;
		root->left = tmp;
		reverse_tree(root->right);
		reverse_tree(root->left);
	}
	return ;
}

/*
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	struct s_node	*root = malloc(sizeof(struct s_node));
	root->value = 94;

	root->left = malloc(sizeof(struct s_node));
	root->right = malloc(sizeof(struct s_node));
	root->left->value = 34;
	root->right->value = 52;
	root->right->left = NULL;
	root->right->right = NULL;

	root->left->left = malloc(sizeof(struct s_node));
	root->left->right = malloc(sizeof(struct s_node));
	root->left->left->value = 1;
	root->left->right->value = 99;

	root->left->left->left = malloc(sizeof(struct s_node));
	root->left->left->left->value = 20;
	root->left->left->left->left = NULL;
	root->left->left->left->right = NULL;

	root->left->right->left = malloc(sizeof(struct s_node));
	root->left->right->right = malloc(sizeof(struct s_node));
	root->left->right->left->value = 83;
	root->left->right->right->value = 39;
	root->left->right->left->left = NULL;
	root->left->right->left->right = NULL;
	root->left->right->right->left = NULL;
	root->left->right->right->right = NULL;

	printf("[r: %d, rl: %d, rr: %d, rll: %d, rlr: %d, rlll: %d, rlrl: %d, rlrr: %d]\n",
			root->value,
			root->left->value,
			root->right->value,
			root->left->left->value,
			root->left->right->value,
			root->left->left->left->value,
			root->left->right->left->value,
			root->left->right->right->value
	);

	reverse_tree(root);
	printf("[r: %d, rl: %d, rr: %d, rrl: %d, rrr: %d, rrll: %d, rrlr: %d, rrrr: %d]\n",
			root->value,
			root->left->value,
			root->right->value,
			root->right->left->value,
			root->right->right->value,
			root->right->left->left->value,
		   	root->right->left->right->value,
			root->right->right->right->value
	);

	return (0);
}
*/
