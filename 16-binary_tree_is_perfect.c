#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int nodes, h, max_node;

	if (!tree)
		return (0);

	nodes = binary_tree_size(tree);
	h = binary_tree_height(tree);
	max_node = power(2, (h + 1)) - 1;
	if (nodes == max_node)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
        if (!tree)
                return (0);

        return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
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

/**
 * power - perform exponential operation
 * @base: base number
 * @power: the power
 *
 * Return: base ^ power
 */

int power(int base, int power)
{
	int i, result;

	result = base;

	for (i = 0; i < power - 1; i++)
	{
		result *= base;
	}
	return (result);
}
