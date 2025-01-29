//Program to find second largest element in the list
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main(){
	int *arr, size;
	scanf("%d", &size);
	arr = (int*)calloc(size, sizeof(int));
	if (arr!=NULL){ // if memory is allocated
		int max, smax;
		max = smax = INT_MIN; // -2147483648
		for (int index = 0; index<size; scanf("%d", arr+index++));
		for (int index=0; index<size; index++){
			if ( arr[index]>max){
				smax = max;
				max = arr[index];
			}
			else if (arr[index]!=max && arr[index]>smax) smax = arr[index];
		}
		if (smax!=INT_MIN)
			printf("%d", smax);
		else
			printf("No Second Max");
		free(arr);
	}
	else
		printf("Insufficient memory!");
	return 0;
}