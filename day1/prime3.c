//All prime numbers are either 6N+1 or 6N-1 except 2 & 3
//
//17 ==> 6 x 3 - 1
//19 ==> 6 x 3 + 1
//5 ==> 6 x 1 - 1
//31 ==> 6 x 5 +1
//but all 6N+1 and 6N-1 are not prime numbers
#include <stdio.h>
int main(){
	int x;
	scanf("%d", &x);
	if ( x == 1)
		printf("Not Prime");
	else if (x > 3 && (x % 2 == 0 || x % 3 == 0))
		printf("Not Prime");
	else{
		for (int i = 5; i*i<=x; i+=6){
			if ( x % i == 0 || x%(i+2)==0){
				printf("Not prime!");
				return 0;
			}
		}
		printf("Prime");
	}
	
	return 0;
}