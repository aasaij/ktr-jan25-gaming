#include <stdio.h>
int main(){
	signed char x = 250; // 1111 1010
	int y;
//	y = -6 + 0 +  5 + (-5)  //-(x+1)
	y = x + !x + ~x +++x;
	printf("%d", y);
	
	return 0;
}
//250's binary:	1111 1010
//0000 0101
//0000 0001
//
//0000 0110   ==> -6



