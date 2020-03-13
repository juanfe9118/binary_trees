#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to evaluate
 * Return: a pointer to the sibling node or NULL if no sibling found
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left->n == node->n)
	{
		if (node->parent->right != NULL)
			return (node->parent->right);
	}
	else if (node->parent->right->n == node->n)
	{
		if (node->parent->left != NULL)
			return (node->parent->left);
	}

	return (NULL);
}
