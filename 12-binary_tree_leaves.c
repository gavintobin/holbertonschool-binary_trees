#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves of trees
 * @tree: pointer to root node of tree
 * Return: 0
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
	return (0);

	else
	return(binary_tree_is