#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_is_root - checks if a node is root
 * @node: the node to check
 *
 * Return: 1 if true and 0 if false
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);

	return (1);
=======
* binary_tree_is_root - Checks if a node is a root
* @node: Pointer to the node to check
*
* Return: 1 if node is a root, otherwise 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL || node->parent != NULL)
return (0);

return (1);
>>>>>>> 2ad20dd557f5c3ba445a1f5cd6e5cb8455ca2af3
}
