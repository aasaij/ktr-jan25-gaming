//Program to demonstrate linked List
#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "linkedlist.h"
int main(){
	node* root = NULL;
	int choice;
	while(1){
		printMenu();
		scanf("%d", &choice);
		switch(choice){
			default:
				printf("Thank you so much for being very very interactive!");
				return 0; // exit(0);
			case 1:
				root = addFirst(root, getPlayer()); break;
			case 2:
				root = addLast(root, getPlayer());break;
			case 3:
				root = addAfterPlayer(root,getPlayerName(),getPlayer() ); break;
			case 4:
				root = deleteFirst(root); break;
			case 5:
				root = deleteLast(root); break;
			case 6:
				root = deleteAfterPlayer(root, getPlayerName()); break;
			case 7:
				printf("Number of Players : %d\n", count(root)); break;
			case 8:{
				player *info = searchPlayer(root, getPlayerName());
				if (info){
					printPlayer(*info);
				}
				else
					printf("Player not found!");
				break;
			}
			case 9:
				printList(root);
		}
	}
	return 0;
}