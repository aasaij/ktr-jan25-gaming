//Program to generate two dimensional array dynamically..
//Array of pointers
#include <stdio.h>
#include <stdlib.h>
int main(){
	int **arr, rowSize, colSize;
	scanf("%dx%d", &rowSize, &colSize); // 5x5
	//allocating memory for rows - row dimension
	arr = (int **)calloc(rowSize, sizeof(int*));
	for (int i = 0; i<rowSize; i++)
		//allocating memory for columns - column dimension
		arr[i] = (int*)calloc(colSize, sizeof(int));
	for (int r = 0; r<rowSize; r++)
		for (int c = 0; c<colSize; c++)
			scanf("%d", &arr[r][c]);
	for (int r = 0; r<rowSize; r++){
		for (int c = 0; c<colSize; c++)
			printf("%4d", arr[r][c]);
		printf("\n");
	}			
	free(arr);
	return 0;
}