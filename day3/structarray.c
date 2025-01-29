#include <stdio.h>
#include<stdlib.h>
struct Player{
	char name[30]; // 30
	double health; // 8
	int score;	 // 4
};
int compare(const void* player1, const void* player2){
	return (*(struct Player*)player2).score - (*(struct Player*)player1).score;
}
void printLine(int len){
	for (int i = 1; i<=len; i++)
		printf("-");
	printf("\n");
}
#define LINE_LEN 48
void printHeading(){
	printf("\nLeader Board\n");
	printf("************\n");
	printLine(LINE_LEN);
	printf("Rank Player Name%*s Health Score\n",19,"");
	printLine(LINE_LEN);	
}
int main(){
	struct Player *players;
	int size;
	scanf("%d", &size);
	players = (struct Player *)calloc(size, sizeof(struct Player));
	for (int index = 0; index<size; index++){
		scanf("%29s %lf %d", players[index].name,&players[index].health,
			&players[index].score);
	}
	qsort(players, size, sizeof(players[0]), compare);
	printHeading();
	for (int index = 0; index<size; index++){		
		printf("%4d %-30s %5.1lf%% %5d\n",index+1, players[index].name,players[index].health,
			players[index].score);
	}
	printLine(LINE_LEN);
	return 0;
}
//LeaderBoard
//************
//  ------------------------------
//Rank Player Name  Health Score
//  -------------------------------
//1    AAA          100     15
//2    BBB          100     10


