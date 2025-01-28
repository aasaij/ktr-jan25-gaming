//Program to search an element in an array using recursing
#include <stdio.h>
#include<stdbool.h>
//implementing linear search algorithm using recursion
bool linearSearch(int arr[], int n, int search){
	if (n==0)
		return false;
	if(arr[n-1]==search)
		return true;
	return linearSearch(arr,n-1, search);
}
int main(){
	int arr[] = {10,20,30,22,40,11, 50,60}, searchElement;
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("Search Element : ");
	scanf("%d", &searchElement);
	printf("%s", linearSearch(arr, size, searchElement)?"Found":"Not Found");
	return 0;
}