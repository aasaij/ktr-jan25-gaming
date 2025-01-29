#include <stdio.h>
int main(){
	int arr[] = {567, 78, 45, 567, 321, 45, 98};
	int size = sizeof(arr)/ sizeof(arr[0]);
	int *ptr;
	ptr = arr; // ptr = &arr[0];
	ptr = ptr + 2;
	printf("%d\n", *arr);
	printf("%d %d\n", *ptr, ptr[0]);
	printf("%d %d", ptr[-1], ptr[-2]);
	return 0;
}