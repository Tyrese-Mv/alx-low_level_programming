#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS_H
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_binary(int *array, size_t left, size_t right);
#endif