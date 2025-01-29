//void*
#include <stdio.h>

int main(){
	void *ptr;
	int x = 10;
	char c = 'J';
	float f = 10.5;
	ptr = &x;
	printf("%d\n", *(int*)ptr);
	ptr = &c;
	printf("%c\n", *(char*)ptr);
	ptr = &f;
	printf("%g\n", *(float*)ptr);
	return 0;
}