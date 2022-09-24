#include "binary_trees.h"

/**
 * binary_tree_levelorder - traverse using level-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to vall for each node
 *
 * Return: Nothing if tree or func is NULL
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	levelorder(tree, func, 0);
}

/**
 * levelorder - print data in level-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to the root node of the tree to traverse
 * @h: first level identifier
 *
 * Return: Nothing if tree or func is NULL
 */

void levelorder(const binary_tree_t *tree, void (*func)(int), int h)
{
	if (!tree || !func)
		return;
	if (h == 0)
		func(tree->n);
	if (tree->left)
	{
		func(tree->left->n);
	}
	if (tree->right)
	{
		func(tree->right->n);
	}
	levelorder(tree->left, func, 1);
	levelorder(tree->right, func, 1);
}
