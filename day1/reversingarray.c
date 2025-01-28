//Program to reverse an array
#include <stdio.h>

int main(){
	int size;
	scanf("%d", &size);	
	int arr[size];
	for (int i = 0; i<size;i++)
		scanf("%d", &arr[i]);
	//reversing an array
	for (int i=0, j=size-1; i<j; i++, j--)
		arr[i] =(arr[i]+arr[j])-(arr[j]=arr[i]);
	for (int i = 0; i<size;i++)
		printf("%d ", arr[i]);
		
	return 0;
}