//UDD ==> User defined data type ==> ADT
//	struct, union, typedef, enum
//Program to demonstrate UDD
#include <stdio.h>
typedef int score;
enum daysOfWeek {Monday=1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
int main(){
//	score player1, player2, player3;
	int day;
	scanf("%d", &day);
	switch(day){
		case Monday:
				printf("It's Monday. Concentrate on studies!"); break;
		case Tuesday ... Thursday:
				printf("Still it's week day only"); break;
		case Friday:
				printf("It's Friday. Get ready for week end"); break;
		case Saturday: case Sunday:
				printf("Enjoy your holiday!"); break;
		default:
				printf("Invalid day!");				
	}
	return 0;
}
//Day number
//1 ==> It's Monday-> Concentrate on studies
//2,3,4 ==> Still it's week day only
//5 --> It's Friday. Get ready for week end
//6,7 ==> Enjoy your holiday
//otherwise ==> Invalid day!


