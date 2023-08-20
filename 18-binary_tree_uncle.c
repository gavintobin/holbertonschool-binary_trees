#include "binary_trees.h"

/**
 * binary_tree_uncle - uncle
 * @node: stump
 * Return: pointer
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->right != node->parent)
		uncle = node->parent->parent->right;
	else if (node->parent->parent->left != node->parent)
		uncle = node->parent->parent->left;

	return (uncle);
}
