#include "binary_trees.h"

/**
 * binary_tree_nodes - im not alone
 * @tree: stUmp
 * Return: count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t x = 0;

	if (tree == NULL)
		return (x);

	if (tree->right == NULL && tree->left == NULL)
		return (x);

	x = 1 + binary_tree_nodes(tree->right);
	x += binary_tree_nodes(tree->left);

	return (x);
}
