//String rotation problem
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare (const void* x, const void* y){
	return *(char*)x - *(char*)y;
}
int main(){
	char str[100], *firstCharString;
	int rotation, index = 0, len, n ;
	scanf("%s %d",str, &rotation);
	firstCharString = (char*)calloc(rotation+1, sizeof(char));
	len = strlen(str);
	n = rotation;
	while(rotation--){
		char dir ;
		int num;
		scanf("\n%c %d", &dir, &num); // carrace  L 3  racecar
		if (dir == 'l' || dir == 'L')
			firstCharString[index++]= str[num];
		else
			firstCharString[index++]= str[len-num];
	}
	qsort(firstCharString, n, sizeof(char), compare);
	for (int i = 0; i<len; i++)	{
		char temp[n+1];
		strncpy(temp, str+i, n);
		qsort(temp, n, sizeof(char), compare);
		if (strcmp(temp, firstCharString)==0){
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	
	return 0;
}