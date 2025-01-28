//Program to check whether the given number is prime or not
//Method 2
#include <stdio.h>
#include <math.h>
int main(){
	int x;
	scanf("%d", &x);
	if (x==1)
		printf("Neither prime nor composite");
	else{
		for (int i = 2; i<=sqrt(x); i++){
			if ( x % i == 0){
				printf("Not prime");
				return 0;
			}
		}
		printf("Prime");
	}
	return 0;
}



