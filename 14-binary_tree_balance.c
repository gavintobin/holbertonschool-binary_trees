#include "binary_trees.h"

/**
 * binary_tree_height_2 - level deepness
 * @tree: stump
 * Return: height of tree
 */
size_t binary_tree_height_2(const binary_tree_t *tree)
{
	size_t Tright = 0;
	size_t Tleft = 0;

	if (tree == NULL)
		return (0);

	Tright = binary_tree_height_2(tree->right);
	Tleft = binary_tree_height_2(tree->left);
	if (Tright > Tleft)
		return (Tright + 1);
	else
		return (Tleft + 1);
}

/**
 * binary_tree_balance - compares the balance
 * @tree: stump
 * Return: balance count
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;
	size_t m = 0;

	if (!(tree))
		return (0);

	r = binary_tree_height_2(tree->right);
	l = binary_tree_height_2(tree->left);
	m = l - r;
	return (m);
}
