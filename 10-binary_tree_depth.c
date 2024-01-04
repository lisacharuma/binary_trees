#include "binary_trees.h"

/**
* binary_tree_depth - finds tree depth
* @tree: ptr to tree root
* Return: depth of a node, 0 is tree is NULL
**/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = -1;

	while (tree != NULL)
	{
		depth++;
		tree = (*tree).parent;
	}
	if (depth < 0)
		return (0);
	return (depth);
}
