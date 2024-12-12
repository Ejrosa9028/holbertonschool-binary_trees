#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Cuenta las hojas en un árbol binario
 * @tree: Puntero a la raíz del árbol binario
 *
 * Return: El número de hojas en el árbol. Si el árbol es NULL, retorna 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
	{
		return (leaves);
	}

	/* Si el nodo es una hoja (sin hijos), incrementamos el contador */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	/* Si no es hoja, seguimos buscando en los subárboles izquierdo y derecho */
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);

	return (leaves);
}

