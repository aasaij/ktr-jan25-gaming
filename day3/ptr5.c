#include <stdio.h>
int main(){
	char c; 
	char *ptr;
	ptr = &c;
	*ptr = 65;
	(*ptr)++;
	printf("%c", *ptr);
	return 0;	
}