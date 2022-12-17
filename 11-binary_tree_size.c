#include "binary_trees.h"

/**
 * binary_tree_size - measures size of binary tree
 * @tree: pointer t root node
 * Return: 0
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);
	{
		size_t n_l, n_r;

		n_l = binary_tree_size(tree->left);
		n_r = binary_tree_size(tree->right);
		return (1 + n_l + n_r);
	}
}
