// Author: Hoai Dinh

#pragma once

#include <random>

#define SWAP(x, y) {int temp = x; x = y; y = temp;}

int  qsort_partition(int array[], int left, int right, bool random);
void quick_sort(int array[], int left, int right, bool random);

void merge_sort(int array[], int left, int right);

void insertion_sort(int array[], int size);
void selection_sort(int array[], int size);
void bubble_sort(int array[], int size);