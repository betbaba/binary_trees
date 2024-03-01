#include "binary_trees.h"
/**
 * binary_tree_node - Creates a new binary tree node with the given value.
 * @parent: A pointer to the parent binary tree node.
 * @value: The value to be assigned to the new node.
 *
 * Return: A pointer to the newly created binary tree node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (value == '\0')
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
