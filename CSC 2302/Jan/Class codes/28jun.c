#include <stdio.h>

struct animal {
	char question[50]; // The question to ask about the animal
	int yes, no;	   // The location of the next choice
	char name[15];	   // The name of an animal
};

struct animal animals[100] = {{"Does your animal fly?", 1, 2, ""}, 
							  {"", -1, -1, "eagle"},
							  {"", -1, -1, "lion"}};
int maxanimals = 2;
int lastquestion;	
	
void check(int i){
	char query[10];
	if(animals[i].yes > 0) { 
		printf("%s ", animals[i].question);
		scanf("%s", query);
		lastquestion = i;
		if(query[0] == 'y' || query[0] == 'Y')
			check(animals[i].yes);
		else
			check(animals[i].no);
		}
	else {
		printf("Is your animal a(n) %s? ", animals[i].name);
		scanf("%s", query);
		if(query[0] == 'y' || query[0] == 'Y')
			printf("Thanks for playing!\n\n");
		else {
				// We have failed to guess the animal.
				// Read the new animal, and a question to identify it.
				// Then adjust the links from that question and the old question.
				struct animal *newanimal;
				struct animal *newquestion;
				printf("You beat me!\n\n");
				maxanimals++;
				newanimal = &animals[maxanimals];
				printf("What is your animal? ");
//				scanf("%s", animals[maxanimals].name);
				scanf("%s", newanimal->name);
				getchar();
				newanimal->yes = -1;
				newanimal->no = -1;
				maxanimals++;
				newquestion = &animals[maxanimals];
				printf("Give me a question that will distinguish a(n) %s from a(n) %s: ",
					animals[i].name, newanimal->name);
				gets(newquestion->question);
				newquestion->yes = maxanimals-1;
				newquestion->no = i;
				if(animals[lastquestion].yes == i) animals[lastquestion].yes = maxanimals;
				else animals[lastquestion].no = maxanimals;
			}
		}
}

void main() {

	char query[10] = "y";
	while(query[0] == 'y' || query[0] == 'Y') {	
		lastquestion = -1;
		check(0);
		//getchar();
		printf("Play again? ");
		scanf("%s", query);
		}
}