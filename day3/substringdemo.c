#include <stdio.h>
#include <stdlib.h>
char *substring(char *str, int startIndex, int numChars){
	char *temp = (char*)calloc(numChars+1, sizeof(char));
	for (int i =startIndex, j=0;j<numChars && str[i]; i++, j++)
		temp[j] = str[i];
	return temp;	
}
int main(){
	printf("%s", substring("Testing@123",3,40)); // ting
	return 0;
}