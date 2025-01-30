//program to return structure data
#include <stdio.h>
typedef struct Player {
	char name[30];
	float health;
	int score;
}player;

player getPlayer(){
	player temp;
	scanf("%s %f %d", temp.name,&temp.health, &temp.score);
	return temp;
}
void printPlayer(player p){
	printf("%s %f %d", p.name, p.health, p.score);
}

int main(){
	printPlayer(getPlayer());
	return 0;
}