#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - Realiza un recorrido postorden en un árbol binario.
 * @tree: Puntero al nodo raíz del árbol.
 * @func: Puntero a la función a llamar para cada nodo.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)  /*Si el árbol o la función son NULL*/
	{
		return;
	}

	binary_tree_postorder(tree->left, func);  /*Recorremos el subárbol izq*/
	binary_tree_postorder(tree->right, func); /*Recorremos el subárbol derecho*/
	func(tree->n);  /*Procesamos el nodo actual*/
}
