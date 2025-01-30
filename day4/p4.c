#include <stdio.h>

int main(){
//	int x = -1, y;
	int x=10, y;
//	y = x>>32;
	y = x << 30;
	printf("%d", y);
	return 0;
}