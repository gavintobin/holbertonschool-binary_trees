#include "binary_trees.h"

/**
 * binary_tree_is_root - main node or nah
 * @node: check
 * Return: 1 if yes, or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && node->parent == NULL)
		return (1);
	return (0);
}
