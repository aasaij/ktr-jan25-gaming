//Program to search an element in an array using recursing
#include <stdio.h>
#include<stdbool.h>
#include <stdlib.h>
int compare(const void* x, const void* y){
	return *(int*)x - *(int*)y;
}
//implementing binary search algorithm using recursion

int main(){
	int arr[] = {10,20,30,22,40,11, 50,60}, searchElement;
	int size = sizeof(arr)/sizeof(arr[0]);
	qsort(arr, size, sizeof(arr[0]),compare);
	printf("Search Element : ");
	scanf("%d", &searchElement);
//	if (bsearch(&searchElement, arr, size, sizeof(arr[0]),compare))
//		printf("Found");
//	else
//		printf("Not Found!");
	printf("%d", (int*)bsearch(&searchElement, arr, size, sizeof(arr[0]),compare)-arr);
	return 0;
}