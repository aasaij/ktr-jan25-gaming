//Program to add two numbers
//input 1 
//10 5
//output 1
//15
//input 2
//12.5  2.4
//
//output
//14.90
//
//input 3
//10.5 2.5
//output 3
//13
#include <stdio.h>
int main(){
	double x, y, sum;
	scanf("%lf %lf", &x, &y);
	sum = x + y;
	if ( sum == (long int)sum)
		printf("%ld", (long int)sum);
	else
		printf("%.2lf", sum);
	return 0;
}