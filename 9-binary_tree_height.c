#include "binary_trees.h"

/**
 * binary_tree_height - measures height of tree
 * @tree: pointer to root node to measure height
 * Return: 0 if null
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int l = 0;
		int r = 0;

		if (tree->right)
		r = 1 + binary_tree_height(tree->right);
		if (tree->left)
		l = 1 + binary_tree_height(tree->left);
		if (l > r)
		return (l);
		else
		return (r);
	}
	return (0);
}
