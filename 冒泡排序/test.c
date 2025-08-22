#include <stdio.h>
#include <stdlib.h>
int cmp_int (const void* ep1, const void* ep2)
{
	return *(int*)ep1 - *(int*)ep2;
}
int main()
{
	int arr[] = { 1,0,2,4,3,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}	