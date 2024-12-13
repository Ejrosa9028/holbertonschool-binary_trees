#include "binary_trees.h"

/**
 * binary_tree_uncle - Encuentra el tío de un nodo.
 *
 * @node: Puntero al nodo cuyo tío queremos encontrar.
 *
 * Return: Un puntero al nodo tío, o NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* Si el nodo o su padre o su abuelo son NULL*/
	if (!node || !node->parent || !node->parent->parent)
	{
		return (NULL);
	}

	/* Si el padre es el hijo izquierdo del abuelo*/
	if (node->parent == node->parent->parent->left)
	{
		return (node->parent->parent->right);
	}

	/* Si el padre es el hijo derecho del abuelo*/
	if (node->parent == node->parent->parent->right)
	{
		return (node->parent->parent->left);
	}

	/* Si no hay tío, retornamos NULL */
	return (NULL);
}

