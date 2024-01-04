#include "binary_trees.h"

/**
* sibling - finds the sibling of a node
* @node: ptr to the node to find the sibling
* Return: ptr to the sibling node,
* NULL if node is NULL or the parent is NULL or
* if node has no sibling
**/
binary_tree_t *sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;

	if (node == NULL)
	{
		return (NULL);
	}
	if ((*node).parent == NULL)
	{
		return (NULL);
	}
	parent = (*node).parent;
	if ((*parent).left != NULL && (*parent).right != NULL)
	{
		if (node == (*parent).left)
			return ((*parent).right);
		return ((*parent).left);
	}
	return (NULL);
}

/**
* binary_tree_uncle - finds the uncle of a node
* @node: ptr to the node to find the uncle
* Return: ptr to the uncle node
* if node is NULL, return NULL
* if node has no uncle, return NULL
**/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (node == NULL)
	{
		return (NULL);
	}
	if ((*node).parent == NULL)
	{
		return (NULL);
	}
	return (sibling((*node).parent));
}
