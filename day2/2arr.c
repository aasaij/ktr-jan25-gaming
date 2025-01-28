//Program to demonstrate two dimensional array
#include <stdio.h>

int main(){
//	int arr[][2] = {10,20,30,40,50,60};
//	int arr[][2] = {
//			{10,20},
//			{30,40},
//			{50,60}
//			};
//	int arr[][2] = {10,20,30,40,50,60};	
//	int arr[5][2] = {10,20,30,40,50,60};	
//	int polyPoints[10][2];
	int arr[][3] = {{1,2,3},
					{2,3,4},
					{4,5,6}	};
	int rowSize = sizeof(arr)/sizeof(arr[0]);
	printf("Main diagonal : ");
	for (int r=0; r<rowSize; r++)
		printf("%d ",arr[r][r]);
	printf("\nOff diagonal : ");
	for (int r=0; r<rowSize; r++)
		printf("%d ",arr[r][3-r-1]);

	
	return 0;
}
//Toggle command button --> CTRL + /

