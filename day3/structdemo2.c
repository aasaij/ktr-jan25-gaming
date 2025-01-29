//Program to demonstrate structure
#include <stdio.h>
#include <string.h>
struct Player{
	char name[30]; // 30
	double health; // 8
	int score;	 // 4
};
void printEmployee (struct Player p){
	printf("Player Name : %s\n", p.name);
	printf("Health      : %.1f%%\n", p.health);
	printf("Score       : %d\n", p.score);
}
int main(){
	//structure varible declaration
	struct Player p1,p2;
	strcpy(p1.name, "Nendra"); // p1.name = "Nendra"
	p1.health = 100;
	p1.score = 10;
	strcpy(p2.name, "Tanish"); // p1.name = "Nendra"
	p2.health = 100;
	p2.score = 15;	
	printf("Player 1 :\n");
	printEmployee(p1);
	printf("Player 2 :\n");
	printEmployee(p2);
	return 0;
}