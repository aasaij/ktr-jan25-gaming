//Nihal
//Nihal
//Niha
//Nih
//Ni
//N
#include <stdio.h>
#include <string.h>
int main(){
//	char str[] = "Nihal";
	char str[100];
	int len;
	scanf("%s", str);
	len = strlen(str);
	for (int i = len; i>=1; i--)
		printf("%*.*s%-*.*s\n", len,i, str, len,i, str);
	for (int i = 1; i<=len; i++)
		printf("%*.*s%-*.*s\n", len,i, str, len,i, str);
	return 0;
}