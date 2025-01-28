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
		printf("%-*.*s%*.*s\n", len,i, str, len,i, str);
//	printf("%-5.5s\n", str);
//	printf("%-5.4s\n", str);
//	printf("%-5.3s\n", str);
//	printf("%-5.2s\n", str);
//	printf("%-5.1s\n", str);
//	printf("%*.*s", 15, 10, "Karthik is sooo cute!");
//	printf("%-10s is good\n", "Sankha");
//	printf("%-10s is good\n", "Nihal");
//	printf("%-10s is good\n", "Karthik");
	return 0;
}