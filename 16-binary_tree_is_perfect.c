#include "binary_trees.h"

/**
 * countN - count nodes
 * @tree: stump
 * Return: count
 */
int countN(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + countN(tree->left) + countN(tree->right));
}

/**
 * heightT - get height
 * @tree: stump
 * Return: height
 */
int heightT(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);
	return (1 + heightT(tree->left));
}

/**
 * binary_tree_is_perfect - check
 * @tree: stump
 * Return: 1 good or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int nodes;
	int h;
	int i;
	int num = 2;

	if (tree == NULL)
		return (0);

	nodes = countN(tree);
	h = heightT(tree);

	for (i = 0; i < h; i++)
		num *= 2;
	num--;

	if (nodes == num)
	{
		return (1);
	}

	return (0);
}
