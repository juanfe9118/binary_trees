#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	height = binary_tree_height(tree->left);
	if (tree != NULL)
		height++;
	if (height < binary_tree_height(tree->right))
		height = binary_tree_height(tree->right);
	return (height);
}
