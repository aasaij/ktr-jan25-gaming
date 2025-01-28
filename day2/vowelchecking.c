//Program to demonstrate function
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
bool isVowel(char c){
//	return (c=='a'||c=='e' || c=='i' || c=='o' || c=='u' ||
//		c=='A'||c=='E' || c=='I' || c=='O' || c=='U');
	return strchr("aeiouAEIOU",c) != NULL;
}
bool isConsonant(char c){
//	return ((c >='a' && c <='z') || (c>='A' && c <='Z')) && !isVowel(c);
	return isalpha(c) && !isVowel(c);
}
int main(){
	char ch;
	scanf("%c", &ch);
//	printf("%s", isVowel(ch)?"Vowel":"Not Vowel");	
	printf("%s", isConsonant(ch)?"Consonant":"Not Consonant");	
	return 0;
}