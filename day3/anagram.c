//Program to check the given strings are anagram or not
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int compare(const void *x, const void *y){
	return *(char*)x - *(char*)y;
}
int main(){
	char str1[100], str2[100];
	scanf("%s %s", &str1[0], str2);
	int len1, len2;
	len1 = strlen(str1);
	len2 = strlen(str2);
	if (len1==len2){
		qsort(str1, len1, sizeof(str1[0]), compare);
		qsort(str2, len2, sizeof(str2[0]), compare);
		printf("%s", !strcmp(str1, str2)?"Anagram":"Not Anagram");
	}
	else
		printf("Not Anagram");
	return 0;
}