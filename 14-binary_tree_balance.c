#include "binary_trees.h"

/**
* scale - helper function that measures the height of a binary tree
* @tree: ptr to root
* Return: height of a binary tree, 0 is tree is NULL
**/
int scale(const binary_tree_t *tree)
{
	int ll = 1;
	int lr = 1;

	if (tree == NULL)
	{
		return (-1);
	}
	ll += scale((*tree).left);
	lr += scale((*tree).right);
	if (lr > ll)
	{
		return (lr);
	}
	return (ll);
}

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: ptr to root
* Return: balance factor of binary tree, 0 if tree is NULL
**/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	left = scale((*tree).left);
	right = scale((*tree).right);
	return (left - right);
}
