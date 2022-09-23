#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right, temp;

	if (!tree)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (!tree->left || !tree->right)
	{
		temp = binary_tree_height(tree);
		if (tree->left)
		{
			return (temp);
		}
		else
		{
			return (left - temp);
		}
	}
	return (left - right);
}

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
