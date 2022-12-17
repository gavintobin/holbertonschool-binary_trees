#include "binary_trees.h"

/**
 * binary_tree_preorder - uses pre order traversal
 * @tree: root to treverse
 * @func: pointer to function to call for each node
 * Return: none
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->right, func);
		binary_tree_preorder(tree->left, func);
	}
}
