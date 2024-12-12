#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Crea un nuevo nodo en un árbol binario.
 * @parent: Puntero al nodo padre del nuevo nodo.
 * @value: El valor que se almacenará en el nuevo nodo.
 *
 * Return: Puntero al nuevo nodo creado, o NULL si la memoria no pudo ser
 *         asignada.
 *
 * Descripción: La función crea un nuevo nodo en un árbol binario con valor
 * especificado. Inicializa los punteros izquierdo y derecho como NULL y
 * asigna el nodo padre proporcionado.
 * Si no se puede asignar memoria para el nuevo nodo, retorna NULL.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	/*Verificar si la asignacion de memoria fue exitosa*/
	if (!new_node)
	{
		return (NULL);
	}

	/*Inicializar los campos del nuevo nodo*/
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/*Retornar el puntero al nuevo nodo creado*/
	return (new_node);
}
