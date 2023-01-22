#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * struct listint_s: Doubly linked list node
 * @n: Integer stored in the node
 * @prev: pointer to the previous node
 * @next: pointer to the next nod
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
}listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
#endif
