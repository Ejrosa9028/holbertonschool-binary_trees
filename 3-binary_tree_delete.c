#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Elimina un árbol binario completo.
 * @tree: Puntero al nodo raíz del árbol que se debe eliminar.
 *
 * Return: Ningún valor. La memoria es liberada para cada nodo.
 *
 * Descripción: La función recursivamente libera la memoria de cada nodo
 * en el árbol binario, comenzando desde las hojas hacia la raíz.
 * Si el árbol es NULL, la función no realiza ninguna acción.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		/* Eliminar los subárboles izquierdo y derecho recursivamente */
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);

		/* Liberar la memoria del nodo actual */
		free(tree);
	}
}

