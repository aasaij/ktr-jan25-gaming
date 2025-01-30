//Guessing a number 
#include <stdio.h>
#include <stdlib.h>
typedef enum Boolean {false, true } boolean;

int generateNumber(int start, int end){
	return rand() % (end-start) + 1 + start;
}
void printLevels(){
	printf("1. Easy\n");
	printf("2. Medium\n");
	printf("3. Difficult\n");
	printf("Enter your choice : ");
}
int main(){
	int min, max, choice, userGuess, sysGuess;
	boolean guessed=false;
	char playerName[100], more;
	printf("Player Name : ");
	scanf("%s", playerName);
	do{
		printLevels();
		scanf("%d", &choice);
		switch(choice){
			case 1: min = 1; max = 10; break;
			case 2: min = 10; max = 50; break;
			case 3: min = 10; max = 100; break;
			default:
				printf("Invalid choice : \n");
		}
		sysGuess = generateNumber(min, max);
		for (int i = 1; i<=3; i++){
			printf("Guess number from %d - %d\n", min, max);
			printf("Your Guess : ");
			scanf("%d", &userGuess);		
			if (userGuess == sysGuess){
				printf("Congrats!!!. %s is winner\n", playerName);
				guessed = true;
				break;
			}
			else if (userGuess > sysGuess)
				printf("The number is smaller.\n");
			else 
				printf("The number is greater\n");
		}
		if (!guessed)
			printf("System wins. The number is %d\n", sysGuess);
		printf("Want to try again [Y/N] ? ");
		guessed = false;
		scanf("\n%c", &more);
	} while (more =='Y' || more == 'y');
	printf("Thank you!...\n");
	return 0;
}