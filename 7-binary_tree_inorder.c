#include "binary_trees.h"


/**
 * binary_tree_inorder - in order traversal of tree
 * @func: poiter to func to call
 * @tree: pointer to root node to traverse
 * Return: none
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

