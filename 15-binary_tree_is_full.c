#include "binary_trees.h"

/**
 * binary_tree_is_full - check tree
 * @tree: stump
 * Return: 1 filled or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;
	int m = 0;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);
	m = l - r;
	if (m)
		return (0);
	return (1);
}
