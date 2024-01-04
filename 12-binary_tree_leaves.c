#include "binary_trees.h"

/**
* binary_tree_leaves - returns tree leaves count
* @tree:  ptr to root node
* Return: count of leaves, 0 if tree is NULL
**/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if ((*tree).right == NULL && (*tree).left == NULL)
	{
		return (1);
	}
	count = binary_tree_leaves((*tree).right) + binary_tree_leaves((*tree).left);
	return (count);
}
