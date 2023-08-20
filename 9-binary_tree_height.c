#include "binary_trees.h"

/**
 * binary_tree_height - how many levels are in the tree
 * @tree: stump
 * Return: level count
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t Tright = 0;
	size_t Tleft = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);

	Tright = binary_tree_height(tree->right);
	Tleft = binary_tree_height(tree->left);

	if (Tright > Tleft)
		return (Tright + 1);
	else
		return (Tleft + 1);
}
