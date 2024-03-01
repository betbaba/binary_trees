#include "binary_trees.h"
/**
 * binary_tree_depth - Gets the depth of a node in a binary tree.
 * @tree: A pointer to the node for which the depth is calculated.
 *
 * Return: The depth of the node in the binary tree, 0 if the node is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		depth += 1 + binary_tree_depth(tree->parent);
	return (depth);
}
