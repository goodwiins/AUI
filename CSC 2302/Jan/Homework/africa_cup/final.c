#include <stdio.h>
//#include "agricacup.h"

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
   int points;
   int goalsin;
}team_t;

typedef struct{
   char location[30];
   team_t *team1, *team2;
   int score1, score2;
   date_t time;
   char status; // status (not yet, delayed, canceled, finished, in progress)
}match_t;

/*typedef struct{
    team_t teams[4];
    int points[4];
    int goals[4];
}ranking_t;


void set_ranking(ranking_t *theranking, match_t *theMatch) {
   // look in the match, and find the teams. Check which team won.
   // Add points to both teams in the ranking.
   // Adjust the ranking.
   int t1num, t2num;
   team_t *t1 = theMatch->team1, *t2 = theMatch->team2;
   for(t1num = 0;t1num < 4 && theranking->t1num!= t1; t1num++);
   
   for(t2num = 0;t2num < 4 && theranking->t[t2num]!= t2; t2num++);
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
}*/
void add_team(team_t* group[],team_t* t,int index){
    group[index]=t;
}
void add_teams(){

}
/*void sort(ranking_t*theranking) {
}*/

int main(void) {
    int ranking_a=0;
    team_t *group_a[4];
    //each group has its ranking and the ranking is set to be gatherd  
    /*à        int ranking_b=0,ranking_c=0;
        team_t *group_b[4];
        team_t *group_c[4];*/
    team_t t1,t2,t3,t4;
        add_team(group_a,&t1,ranking_a++);
        add_team(group_a,&t2,ranking_a++);
        add_team(group_a,&t3,ranking_a++);
        add_team(group_a,&t4,ranking_a++);
    printf("%d",ranking_a);
    set_ranking(*group_a,ranking_a);
 
   
}
