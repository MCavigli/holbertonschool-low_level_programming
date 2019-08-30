#ifndef __SEARCH__H__
#define __SEARCH__H__
#include <stdio.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int rec_bs(int *array, size_t size, int value, int low, int high);
int advanced_binary(int *array, size_t size, int value);
#endif
