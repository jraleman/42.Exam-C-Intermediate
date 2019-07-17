/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perimeter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 10:55:35 by exam              #+#    #+#             */
/*   Updated: 2019/07/16 11:47:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

struct s_node {
	int           value;
	struct s_node *right;
	struct s_node *left;
};

void	perimeter(struct s_node *root)
{
  (void)root;
	return ;
}

int		main(void)
{
	struct s_node	*root = malloc(sizeof(struct s_node));
	root->value = 92;

	root->left = malloc(sizeof(struct s_node));
	root->left->value = 85;
	root->left->right = NULL;

	root->left->left = malloc(sizeof(struct s_node));
	root->left->left->value = 79;
	root->left->left->left = NULL;

	root->left->left->right = malloc(sizeof(struct s_node));
	root->left->left->right->value = 10;
	root->left->left->right->right = NULL;

	root->left->left->right->left = malloc(sizeof(struct s_node));
	root->left->left->right->left->value = 39;
	root->left->left->right->left->right = NULL;

	root->left->left->right->left->left = malloc(sizeof(struct s_node));
	root->left->left->right->left->left->value = 35;
	root->left->left->right->left->left->right = NULL;

	root->left->left->right->left->left->left = malloc(sizeof(struct s_node));
	root->left->left->right->left->left->left->value = 96;
	root->left->left->right->left->left->left->left = NULL;
	root->left->left->right->left->left->left->right = NULL;

	root->right = malloc(sizeof(struct s_node));
	root->right->value = 26;
	root->right->left = NULL;

	root->right->right = malloc(sizeof(struct s_node));
	root->right->right->value = 64;

	root->right->right->left = malloc(sizeof(struct s_node));
	root->right->right->left->value = 40;

	root->right->right->left->left = malloc(sizeof(struct s_node));
	root->right->right->left->left->value = 88;

	root->right->right->left->left->left = malloc(sizeof(struct s_node));
	root->right->right->left->left->left->value = 12;
	root->right->right->left->left->left->right = NULL;

	root->right->right->left->left->left->left  = malloc(sizeof(struct s_node));
	root->right->right->left->left->left->left->value = 58;
	root->right->right->left->left->left->left->left = NULL;
	root->right->right->left->left->left->left->right = NULL;

	root->right->right->left->left->right = malloc(sizeof(struct s_node));
	root->right->right->left->left->right->value = 55;

	root->right->right->left->left->right->left = malloc(sizeof(struct s_node));
	root->right->right->left->left->right->left->value = 58;
	root->right->right->left->left->right->left->left = NULL;
	root->right->right->left->left->right->left->right = NULL;

	root->right->right->left->left->right->right = malloc(sizeof(struct s_node));
	root->right->right->left->left->right->right->value = 41;
	root->right->right->left->left->right->right->left = NULL;
	root->right->right->left->left->right->right->right = NULL;

	root->right->right->left->right = malloc(sizeof(struct s_node));
	root->right->right->left->right->value = 10;

	root->right->right->left->right->left = malloc(sizeof(struct s_node));
	root->right->right->left->right->left->value = 52;

	root->right->right->left->right->left->left = malloc(sizeof(struct s_node));
	root->right->right->left->right->left->left->value = 22;
	root->right->right->left->right->left->left->left = NULL;
	root->right->right->left->right->left->left->right = NULL;

	root->right->right->left->right->left->right = malloc(sizeof(struct s_node));
	root->right->right->left->right->left->right->value = 35;
	root->right->right->left->right->left->right->left = NULL;
	root->right->right->left->right->left->right->right = NULL;

	root->right->right->left->right->right = malloc(sizeof(struct s_node));
	root->right->right->left->right->right->value = 87;
	root->right->right->left->right->right->left = NULL;

	root->right->right->left->right->right->right = malloc(sizeof(struct s_node));
	root->right->right->left->right->right->right->value = 31;
	root->right->right->left->right->right->right->left = NULL;
	root->right->right->left->right->right->right->right = NULL;

	root->right->right->right = malloc(sizeof(struct s_node));
  root->right->right->right->value = 78;

	root->right->right->right->left = malloc(sizeof(struct s_node));
  root->right->right->right->left->value = 2;

	root->right->right->right->left->left = malloc(sizeof(struct s_node));
  root->right->right->right->left->left->value = 33;
  root->right->right->right->left->left->left = NULL;

	root->right->right->right->left->left->right = malloc(sizeof(struct s_node));
	root->right->right->right->left->left->right->value = 55;
	root->right->right->right->left->left->right->left = NULL;
	root->right->right->right->left->left->right->right = NULL;

	root->right->right->right->left->right = malloc(sizeof(struct s_node));
	root->right->right->right->left->right->value = 11;
	root->right->right->right->left->right->right = NULL;

	root->right->right->right->left->right->left = malloc(sizeof(struct s_node));
	root->right->right->right->left->right->left->value = 99;
	root->right->right->right->left->right->left->left = NULL;
	root->right->right->right->left->right->left->right = NULL;

	root->right->right->right->right = malloc(sizeof(struct s_node));
  root->right->right->right->right->value = 85;
	root->right->right->right->left = NULL;

	root->right->right->right->right->right = malloc(sizeof(struct s_node));
	root->right->right->right->right->right->value = 51;
	root->right->right->right->right->right->left = NULL;
	root->right->right->right->right->right->right = NULL;
	return (0);
}
