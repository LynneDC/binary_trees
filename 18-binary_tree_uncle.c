#include "binary_trees.h"

/**
* binary_tree_uncle - Finds the uncle of a node in a binary tree.
* @node: A pointer to the node to find the uncle.
*
* Return: A pointer to the uncle node, or NULL if no uncle.
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *parent = node->parent;
if (node == NULL || node->parent == NULL
|| node->parent->parent == NULL
|| node->parent->parent->left == NULL
|| node->parent->parent->right == NULL)
return (NULL);



if (parent->parent->left == parent)
return (parent->parent->right);
else
return (parent->parent->left);
}
