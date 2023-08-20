#include "binary_trees.h"

/**
 * binary_tree_leaves - just the tips
 * @tree: stump
 * Return: count
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t x = 0;

	if (tree == NULL)
		return (x);


	if (tree->right == NULL && tree->left == NULL)
		return (1);

	x += binary_tree_leaves(tree->right);
	x += binary_tree_leaves(tree->left);

	return (x);
}
