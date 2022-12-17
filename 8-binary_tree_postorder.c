#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through tree usuing post order
 * @tree: pointer to root of tree to traverse
 * @func: pointer to function to call
 * Return: none
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}

}
