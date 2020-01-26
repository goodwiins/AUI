#include <stdio.h>
//#include "agricacup.h"
#define MAX_TEAMS 4 //for the sake of simplicity 

typedef struct {
   int hour;
   int minute;
   int day;
   int month;
}date_t;

typedef struct{
   char name[40];
   int age;
   int number;
}player_t;

typedef struct  {
   player_t player[20];
   char name[35];
}team_t;

typedef struct{
   char *location;
   team_t *team1, *team2;
   int score1, score2;
   date_t time;
   char status; // status (not yet, delayed, canceled, finished, in progress)
}match_t;

typedef struct{
    team_t teams[MAX_TEAMS];
    int points[MAX_TEAMS];
    int goals[MAX_TEAMS];
}ranking_t;

/*void set_ranking(ranking_t *theranking, match_t *theMatch) {
   // look in the match, and find the teams. Check which team won.
   // Add points to both teams in the ranking.
   // Adjust the ranking.
   int t1num, t2num;
   team_t *t1 = theMatch->team1, *t2 = theMatch->team2;
   for(t1num = 0;t1num < MAX_TEAMS && theranking->t1num!= t1; t1num++);
   
   for(t2num = 0;t2num < MAX_TEAMS && theranking->t[t2num]!= t2; t2num++);
   // t1num and t2num tell me the array location of the two teams in
   // the rankings.
   
   if(theMatch->score1 > theMatch->score2)
      theranking->score[t1num] += 3;
   else if(theMatch->score2 > theMatch->score1)
      theranking->score[t2num] += 3;
   else {
      theranking->score1[t1num] ++;
      theranking->score2[t2num] ++;
      }
      
   theranking->goals[t1num] += theMatch->score1;
   theranking->goals[t2num] += theMatch->score2;

   sort(theranking);
}
void sort(ranking_t*theranking) {
}*/

void add_team(ranking_t *theranking){
    t1=theranking->teams[0];
    theranking->goals[0]=0;
    theranking->points[0]=0;

}

int main(void) {
    int index=0;
    ranking_t *theranking;
    team_t t1 ={.name="Morocco"};
    add_team(theranking,&t1,index ++);
    team_t t2 ={.name="Ivory cost"};
    add_team(theranking,&t2,index ++);
    
    /*theranking->size = 0;
   theranking->t[0] = &t1;
   theranking->score[0] = 0;
   theranking->goals[0] = 0;
   theranking->size = 1;*/
   
}
