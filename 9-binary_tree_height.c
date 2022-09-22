#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root of the tree to be measured.
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Height of a leaf node is 0 */
	if (!tree->left && !tree->right)
		return (get_max(left_height, right_height));

	return (get_max(left_height, right_height) + 1);
}


/**
 * get_max - compute the max number between the two input
 * @left: first number
 * @right: second number
 *
 * Return: The max number.
 */

size_t get_max(size_t left, size_t right)
{
	if (left > right)
	{
		return (left);
	}
	else if (right > left)
	{
		return (right);
	}
	else
	{
		return (left);
	}
}
