#include "binary_trees.h"

/**
 *binary_tree_insert_left- function inserts node as left-child of another node
 *@parent: pointer to the node to insert the left-child in
 *@value: the value to store in the new node
 * Return: new or NULL if fails
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new = malloc(sizeof(binary_tree_t));

if (parent == NULL)
{
return (NULL);
}

new = binary_tree_node(parent, value);

if (new == NULL)
return (NULL);

if (parent->left != NULL)
{
new->left = parent->left;
parent->left->parent = new;
}

parent->left = new;

return (new);
}
