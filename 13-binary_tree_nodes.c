#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t result;

	if (!tree)
		return (0);
	result = binary_tree_nodes(tree->left);
	result += binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
	{
		return (result + 1);
	}
	return (result);
}
