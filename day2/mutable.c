#include <stdio.h>

int main(){
//	char str[] = {"Anahad"};
	char *str = {"Anahad"};
	printf("%p\n", str);
	str[0] = 'B';
	printf("%p\n", str);
	puts(str);
//	int x = 10;
//	printf("%p %d\n", &x, x);
//	x = 20;
//	printf("%p %d", &x, x);
	return 0;
}