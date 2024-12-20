#include "binary_trees.h"

/**
 * binary_tree_size - Mide el tamaño de un árbol binario
 * @tree: Puntero a la raíz del árbol binario
 *
 * Return: El tamaño del árbol (número de nodos).
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
	{
		return (size);
	}

	/* Si no es NULL, contamos el nodo actual y subárboles */
	size = 1;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size);
}

