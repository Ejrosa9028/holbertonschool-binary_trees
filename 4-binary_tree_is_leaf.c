#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Verifica si un nodo es una hoja
 * @node: Puntero al nodo a verificar
 *
 * Return: 1 si el nodo es una hoja, 0 si no lo es o si el nodo es NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)  /* Si el nodo es NULL, no es una hoja */
	{
		return (0);
	}

	/* Si no tiene hijos izquierdo ni derecho, es una hoja */
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}

	return (0);  /* Si tiene hijos, no es una hoja */
}
