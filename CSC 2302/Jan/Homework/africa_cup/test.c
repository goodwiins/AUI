
#include <stdio.h>
#include "africa_cup.h"

void main() {
    int n,g;
	//delcare the teams and names 
    ranking_t groups[]=(group_a,group_b,group_c,group_d, group_e,group_f);
    add_teams(&groups);
    rank_update(&groups);
    printf("Choose the commande: \n1) update a team\ n ");
    scanf("%d",&n);
    for (h = 0; h < 20; h++){
        printf("-");
        }
    switch (n){
    case 1: 
        update_team()
        break;
    default:
        break;
    }
    
}
void update_team(rank){
    view_all(&groups);
        printf("If you ant to updated the status of a team  choose the group\n")
        scanf("%d",&n);
        view_groups(&groups);
        scanf("%d",&n);
        printf("If you ant to updated the status of a team  choose the team \n")
        
        team_update(&group[n]);
        view_update(&group[n]);
}



void sort(struct ranking *theRanking) {
}

void set_ranking(struct ranking *theRanking, struct match *theMatch) {
	// look in the match, and find the teams. Check which team won.
	// Add points to both teams in the ranking.
	// Adjust the ranking.
	struct team *t1, *t2;
	int t1num, t2num;
	t1 = (*theMatch).team1; // theMatch->team1
	t2 = theMatch->team2;
	
	for(t1num = 0; 
		t1num < MAX_TEAMS && theRanking->t[t1num]!= t1; 
		t1num++);
	for(t2num = 0; 
		t2num < MAX_TEAMS && theRanking->t[t2num]!= t2; 
		t2num++);
	// t1num and t2num tell me the array location of the two teams in
	// the rankings.
	
	if(theMatch->score1 > theMatch->score2)
		theRanking->score[t1num] += 3;
	else if(theMatch->score2 > theMatch->score1)
		theRanking->score[t2num] += 3;
	else {
		theRanking->score1[t1num] ++;
		theRanking->score2[t2num] ++;
		}
		
	theRanking->goals[t1num] += theMatch->score1;
	theRanking->goals[t2num] += theMatch->score2;

	sort(theRanking);
}
/*struct team t1 = { };
	struct ranking theRanking;
	theRanking->size = 0;
	theRanking->t[0] = &t1;
	theRanking->score[0] = 0;
	theRanking->goals[0] = 0;
	theRanking->size = 1;*/
