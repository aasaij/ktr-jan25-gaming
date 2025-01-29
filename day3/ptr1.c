//Program to demonstrate pointers
#include <stdio.h>

int main(){
	int x, y,z;
	x = 10;
	printf("%d %d", x, *(&x));
	return 0;
}

//& -- Address operator
//* --> indirection or dereferencing or value at location operator