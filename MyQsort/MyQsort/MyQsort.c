#define _CRT_SECURE_NO_WARNINGS 1
#include "MyQsort.h"
int int_cmp(const void *a, const void *b)
{
	int x = *(int *)a;
	int y = *(int *)b;
	if (x > y){
		return 1;
	}
	else if (x < y){
		return -1;
	}
	else{
		return 0;
	}
}
int double_cmp(const void *a, const void *b){
	double x = *(double *)a;
	double y = *(double *)b;
	if (x > y){
		return 1;
	}
	else if (x < y){
		return -1;
	}
	else{
		return 0;
	}
}
void int_Print(int arr[], int len){
	int i = 0;
	for (int i = 0; i < len; i++){
		printf("%d  ", arr[i]);
	}
	printf("\n");
}

void double_Print(double arr[], int len){
	int i = 0;
	for (int i = 0; i < len; i++){
		printf("%f  ", arr[i]);
	}
	printf("\n");
}
void Swamp(const void *a, const void *b, int size){
	int i = 0;
	for (i = 0; i < size; i++){
		char tmp = *((char *)a + i);
		*((char *)a + i) = *((char *)b + i);
		*((char *)b + i) = tmp;
	}
}
void Myqsort(void *arr, int count, int size, int(*cmp)(void *, void *)){
	int i = 0;
	int j = 0;
	for (i = 0; i < count - 1; i++){
		for (j = 0; j < count - i - 1; j++){
			if (int_cmp((char *)arr + j*size, (char *)arr + (j + 1)*size)<0){
				Swamp((char *)arr + j*size, (char *)arr + (j + 1)*size, size);
			}
		}
	}
}

