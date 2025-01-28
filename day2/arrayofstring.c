//Program to demonstrate two dimensional char array
//Array of strings
#include <stdio.h>

int main(){
	char playerNames[][20] = {"Priyansh", "Sankah", "Karthil", "Nihal"};
	int size = sizeof(playerNames)/sizeof(playerNames[0]);
	for (int index = 0; index<size; puts(playerNames[index++]));
	return 0;
}
