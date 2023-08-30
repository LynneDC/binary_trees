#include "binary_trees.h"

/**
* binary_trees_ancestor - Finds the lca of two nodes.
* @first: A pointer to the first node.
* @second: A pointer to the second node.
*
* Return: A pointer to the lca node, or NULL if not found.
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
if (first == NULL || second == NULL)
return (NULL);

while (first != NULL)
{
binary_tree_t *temp = (binary_tree_t *)second;

while (temp != NULL)
{
if (first == temp)
return ((binary_tree_t *)first);
temp = temp->parent;
}
first = first->parent;
}

return (NULL);
}
