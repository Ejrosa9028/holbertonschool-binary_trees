#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - Encuentra el hermano de un nodo.
 *
 * @node: Puntero al nodo cuyo hermano queremos encontrar.
 *
 * Return: Un puntero al nodo hermano, o NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Si el nodo es NULL o su padre es NULL, retornamos NULL */
	if (!node || !node->parent)
	{
		return (NULL);
	}

	/* Si el nodo es el hijo izquierdo, retornamos el hijo derecho */
	if (node == node->parent->left)
	{
		return (node->parent->right);
	}

	/* Si el nodo es el hijo derecho, retornamos el hijo izquierdo */
	if (node == node->parent->right)
	{
		return (node->parent->left);
	}

	/* Si el nodo no tiene hermano, retornamos NULL */
	return (NULL);
}

