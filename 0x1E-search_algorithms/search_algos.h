#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int _binary_search(int *array, size_t left, size_t right, int value);
int exponential_search(int *array, size_t size, int value);
#endif