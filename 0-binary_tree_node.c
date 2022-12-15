#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to parent of node to create
 * @value: value to put into node
 * Return: pointer to nn
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nn = malloc(sizeof(nn));

	if (nn == NULL)
	return (NULL);

	nn->n = value;
	nn->parent = parent;
	nn->left = NULL;
	nn->right = NULL;

	return (nn);
}
