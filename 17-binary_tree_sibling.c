#include "binary_trees.h"

/**
 * binary_tree_sibling - look for sib
 * @node: stump
 * Return: to sib
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sib = NULL;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->right != node)
		sib = node->parent->right;
	else if (node->parent->left != node)
		sib = node->parent->left;

	return (sib);
}
