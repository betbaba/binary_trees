#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a given node in a binary tree.
 * @node: A pointer to the node for which to find the sibling.
 *
 * Return: A pointer to the sibling node, or NULL if the node or its parent is NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
