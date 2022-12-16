#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node at left child
 * @parent: pointer to node to insert
 * @value: value stored in that node
 * Return:pointer to node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nn;

if (!parent)
return(NULL);

nn = binary_tree_node(parent, value);

if (parent->left)
{
	nn->left = parent->left;
	parent->left->parent = nn;
}
parent->left = nn;

return(nn);
}
