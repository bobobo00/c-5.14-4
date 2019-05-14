#define _CRT_SECURE_NO_WARNINGS 1
#include "MyQsort.h"
int main(){
	int arr[] = { 1, 34, 5, 2, 37, 890, 56, 25, 678 };
	double arr1[] = { 2.45, 6.78, 1.234, 7.8, 13.6, 0.67 };
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	int len = sizeof(arr) / sizeof(arr[0]);
	int_Print(arr,len);
	Myqsort(arr,len, sizeof(int), int_cmp);
	int_Print(arr, len);
	double_Print(arr1, len1);
	qsort(arr1, len1, sizeof(double), double_cmp);
	double_Print(arr1, len1);
	system("pause");
	return 0;
}