#include "binary_trees.h"

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect.
* @tree: A pointer to the root node of the tree to check.
*
* Return: 1 if the tree is perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t d = 0, c = 0;
const binary_tree_t *temp = tree;

if (tree == NULL)
return (0);

while (temp != NULL)
{
d++;
temp = temp->left;
}

return (is_perfect(tree, d, 0, &c));
}


/**
* is_perfect - Recursively checks if a binary tree is perfect.
* @tree: A pointer to the current node of the tree to check.
* @d: The depth of the tree.
* @lev: The current level of the tree.
* @c: A pointer to the current count of nodes.
*
* Return: 1 if the tree is perfect, 0 otherwise.
*/
int is_perfect(const binary_tree_t *tree, size_t d, size_t lev, size_t *c)
{
if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
{
if (lev == d - 1)
{
(*c)++;
return (1);
}
return (0);
}

if (tree->left == NULL || tree->right == NULL)
return (0);

return (is_perfect(tree->left, d, lev + 1, c) &&
is_perfect(tree->right, d, lev + 1, c));
}
