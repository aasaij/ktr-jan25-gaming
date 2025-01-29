#include <stdio.h>
int main(){
	int x;
	//delcaration of pointer
	int *ptr;
//	char *ptr1;
//	printf("%lu %lu", sizeof(ptr), sizeof(ptr1));
	ptr = &x;
	*ptr = 100;
	*++ptr= 200;
	printf("%d %d", x, *ptr);
	return 0;	
}