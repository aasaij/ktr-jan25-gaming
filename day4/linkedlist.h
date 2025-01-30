typedef struct Player {
	char name[30];
	float health;
	int score;
}player;

typedef struct Node {
	player playerData;
	struct Node *nxt;
}node;
node* createNode(player playerInfo){
	node* temp = (node*)calloc(1, sizeof(node));
	temp->playerData = playerInfo;
	return temp;
}
node* addFirst(node* list, player info){
	node* newNode = createNode(info);
	newNode->nxt = list;
	list = newNode;
	return list;
}
node *addLast(node* list, player info){
	node *newNode = createNode(info);
	if(list){
		node *temp;
		for(temp = list;temp->nxt;temp=temp->nxt);
		temp->nxt = newNode;
		return list;
	}
	return newNode;
}

node* addAfterPlayer(node* list, char *playerName, player info){
	if (list){
		node* temp;
		for (temp = list; temp; temp= temp->nxt){
			if (strcmp(temp->playerData.name, playerName)==0){
				node* newNode = createNode(info);
				newNode->nxt = temp->nxt;
				temp->nxt = newNode;
			}
		}
	}
	return list;
}
node* deleteFirst(node* list){
	if (list){
		node* temp = list;
		list = temp->nxt;
		free(temp);
	}
	return list;
}
node* deleteLast(node* list){
	if(list){
		if (!list->nxt){
			free(list);
			return NULL;
		}
		node *temp;
		for(temp=list; temp->nxt->nxt; temp=temp->nxt);
		free(temp->nxt);
		temp->nxt = NULL;	
	}
	return list;
}
node* deleteAfterPlayer(node* list, char *playerName){
	if (list){
		node* temp;
		for (temp = list; temp; temp = temp->nxt)	
			if (strcmp(temp->playerData.name, playerName)==0)
				break;
		if(temp && temp->nxt){
			node *t;
			t = temp->nxt;
			temp->nxt = t->nxt;
			free(t);
		}
	}
	return list;
}
int count(node *list){
	int cnt=0;
	for (node* temp= list; temp; temp =temp->nxt, cnt++ );
	return cnt;
}
player* searchPlayer(node* list, char *playerName){
	for (node* temp = list; temp; temp =temp->nxt){
		if (strcmp(temp->playerData.name, playerName)==0)
			return &(temp->playerData);
	}
	return NULL;
}

void printList(node* list){
	if (list){ // checking whether list is not empty
		node* temp;
		printf("\n[");
		for (temp = list; temp->nxt; temp = temp->nxt){
			printf("{'%s', %.1f%%, %d},", temp->playerData.name,
				temp->playerData.health, temp->playerData.score);
		}
		printf("{'%s', %.1f%%, %d}]\n", temp->playerData.name,
				temp->playerData.health, temp->playerData.score);
	}
	else{ // list is empty
		printf("\n[]\n");
	}
}
player getPlayer(){
	player temp;	
	printf("Player Details like name, health, score \n");
	scanf("%s %f %d", temp.name,&temp.health, &temp.score);
	return temp;
}
char* getPlayerName(){
	char *name = (char*)calloc(31, sizeof(char));
	printf("Player Name : ");
	scanf("%s", name);
	return name;
}
void printPlayer(player p){
	printf("Player Name : %s\n", p.name);
	printf("Health      : %.1f%%\n", p.health);
	printf("Score       : %d\n", p.score);
}
void printMenu(){
	printf("\nLinkedLit Demo Application\n");
	printf("**************************\n");
	printf("1. Add First\n");
	printf("2. Add Last\n");
	printf("3. Add after the player\n");
	printf("4. Delete First\n");
	printf("5. Delete Last\n");
	printf("6. Delete after the player\n");
	printf("7. Count the players\n");
	printf("8. Search a player\n");
	printf("9. Print all players\n");
	printf("10. Exit\n");
	printf("Enter your choice : ");
}

