#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Inserta un nodo como hijo izquierdo de otro nodo.
 * @parent: Puntero al nodo donde se insertará el hijo izquierdo.
 * @value: El valor que se almacenará en el nuevo nodo.
 *
 * Return: Puntero al nuevo nodo creado, o NULL si hay un error.
 *
 * Descripción: Si el padre ya tiene un hijo izqu, el new nodo toma su lugar.
 * El hijo izquierdo debe ser asignado como hijo izquierdo del nuevo nodo.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Verificar si parent es NULL */
	if (!parent)
	{
		return (NULL);
	}

	/* Asignar memoria para el nuevo nodo */
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		return (NULL);
	}

	/* Inicializar el nuevo nodo */
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	/* Si el nodo padre ya tiene un hijo izquierdo */
	if (parent->right)
	{
		/* Asignar el antiguo hijo izquierdo como hijo izquierdo del nuevo nodo */
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	/* Asignar el nuevo nodo como hijo izquierdo del nodo padre */
	parent->right = new_node;

	return (new_node);
}
