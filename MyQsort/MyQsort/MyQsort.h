#ifndef _MYQSORT_H_
#define _MYQSORT_H_

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int int_cmp(const void *a,const void *b);
void int_Print(int arr[], int len);
int double_cmp(const void *a, const void *b);
void double_Print(double arr[], int len);
void Myqsort(void *arr, int count, int size, int(*cmp)(void *, void *));
void Swamp(const void *a, const void *b, int size);

#endif