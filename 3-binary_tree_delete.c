#include "binary_trees.h"

/**
 * binary_tree_delete - deletes binry tree
 * @tree: pointer to root node
 * Return: none
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	return;

	free(tree->left);
	free(tree->right);
	free(tree);
}
