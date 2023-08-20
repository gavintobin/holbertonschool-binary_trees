#include "binary_trees.h"

/**
 * binary_tree_delete - deletes tree
 * @tree: parent main
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
