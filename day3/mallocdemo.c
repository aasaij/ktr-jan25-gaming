#include <stdio.h>
#include <stdlib.h>
int main(){
	int *ptr ;	
	int n;
	scanf("%d", &n);
	ptr = (int *)malloc(sizeof(int) *n);
	*ptr = 100;
	printf("%d", ptr[1]);
	free(ptr);
	return 0;
}