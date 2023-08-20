#include "binary_trees.h"

/**
 * binary_tree_depth - how deep is your love
 * @tree: stump
 * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deep = 0;

	if (tree == NULL)
		return (deep);

	while (tree->parent)
	{
		tree = tree->parent;
		deep++;
	}
	return (deep);
}
