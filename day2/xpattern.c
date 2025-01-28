//Program to print X pattern

#include <stdio.h>
#include <string.h>

int main(){
	char str[100];	
	scanf("%s", str);
	int len = strlen(str);
	for (int i = 1; i<len; i++)
		printf("%*c%*c\n", i,str[i-1],2*len - (i*2),str[i-1]);
	printf("%*c\n",len,str[len-1]);
	for (int i = len-1; i>=1; i--)
		printf("%*c%*c\n", i,str[i-1],2*len - (i*2),str[i-1]);
	
	return 0;
}