#include "binary_trees.h"

/**
 *binary_tree_insert_right- function inserts node as right-child of another node
 *@parent: pointer to the node to insert the left-child in
 *@value: the value to store in the new node
 * Return: new or NULL if fails
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new;

if (parent == NULL)
{
return (NULL);
}

new = binary_tree_node(parent, value);

if (new == NULL)
return (NULL);

if (parent->right != NULL)
{
new->right = parent->right;
parent->right->parent = new;
}

parent->right = new;

return (new);
}
