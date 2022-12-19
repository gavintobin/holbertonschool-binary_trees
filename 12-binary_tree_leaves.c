#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves of trees
 * @tree: pointer to root node of tree
 * Return: 0
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	int count = 0;

	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	return (count);
}
