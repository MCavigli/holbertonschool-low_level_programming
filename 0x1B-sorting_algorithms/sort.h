#ifndef __SORT__H__
#define __SORT__H__
#include <stdio.h>
#include <stdlib.h>

/*---- Provided struct ----*/
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*---- Provided functions ----*/
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/*---- Our required functions ----*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);

/*---- Our helper functions ----*/
int checklist(listint_t **list, listint_t **current);
void checkend(listint_t **current, listint_t **tmp, listint_t *list);
int checkbeg(listint_t **current, listint_t **tmp,
	     listint_t **hold, listint_t **list);
int checkjuice(listint_t **current, listint_t **tmp,
	       listint_t *list);
int partition(int *array, size_t start, size_t end, size_t size);
void realqs(int *array, int start, int end, size_t size);
void split(int *tmp_arr, size_t left, size_t right, int *array);
void combine(int *array, size_t left, size_t middle,
	     size_t right, int *tmp_arr);
#endif
