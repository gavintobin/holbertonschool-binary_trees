#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root
 * @node: pointer to node to check
 * Return: 1 if sucessful
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
	return (0);

	return (1);
}
