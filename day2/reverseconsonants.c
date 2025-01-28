//Program to reverse consontant of string
//input 1
//	education@123
//output 1
//	enutaciod@123
//	
//input 2
//	Testing
//output 2
//	gentisT
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isVowel(char c){
	return strchr("aeiouAEIOU",c) != NULL;
}
bool isConsonant(char c){
	return ((c >='a' && c <='z') || (c>='A' && c <='Z')) && !isVowel(c);	
}
void reverseConsonants(char *str, int n){
	for (int i=0, j=n-1;i<j;i++, j--){
		if (isConsonant(str[i]) &&isConsonant(str[j]))
			str[i] = (str[i]+str[j]) - (str[j]=str[i]);
		else if (isConsonant(str[i])) i--;
		else if (isConsonant(str[j])) j++;
	}
}
int main(){
	char str[100];
	scanf("%s", str);
	int len = strlen(str);
	reverseConsonants(str, len);
	printf("%s", str);
	return 0;
}