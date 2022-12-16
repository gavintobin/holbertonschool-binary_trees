#include "binary_trees.h"


/**
 * binary_tree_insert_right - inserts node at right child
 * @parent: pointer to node to insert child in
 * @value: value in node
 * Return: pointer to nn
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *nn;

if 
(!parent)
return (NULL);

nn = binary_tree_node(parent, value);

if (parent->right)
{
nn->right = parent->right;
parent->right->parent = nn;
}
parent->right = nn;

return (nn);
}
