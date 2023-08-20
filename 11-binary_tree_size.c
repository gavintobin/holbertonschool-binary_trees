#include "binary_trees.h"

/**
 * binary_tree_size - counter
 * @tree: stump
 * Return: count
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t x = 0;

	if (tree == NULL)
		return (x);

	x = 1 + binary_tree_size(tree->right);
	x += binary_tree_size(tree->left);

	return (x);
}
