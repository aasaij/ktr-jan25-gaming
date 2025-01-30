//Program to demonstrate pointer to pointer
#include <stdio.h>

int main(){
	int x;
	int *ptr, **dptr;
	ptr = &x;
	dptr = &ptr;
	**dptr = 100;
	printf("%d %d %d", x, *ptr, **dptr);
	return 0;
}