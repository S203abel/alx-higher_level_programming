#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_int - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_int
{
	int n;
	struct list_int *next;
} list_int;

size_t print_list_int(const list_int *h);
list_int *add_n(list_int **head, const int n);
void free_list_int(list_int *head);
int check_c(list_int *list);

#endif /* LISTS_H */

