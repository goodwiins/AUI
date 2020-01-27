nb #include <stdio.h>
//#include "agricacup.h"
#define MAX_TEAMS 30

typedef struct {
   int hour;
   int minute;
   int day;
   int month;
}date_t;

typedef struct{
   char name[30];
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
   int points;
}ranking_t;

/*void set_ranking(ranking_t *theRanking, match_t *theMatch) {
   // look in the match, and find the teams. Check which team won.
   // Add points to both teams in the ranking.
   // Adjust the ranking.
   int t1num, t2num;
   team_t *t1 = theMatch->team1, *t2 = theMatch->team2;
   for(t1num = 0;t1num < MAX_TEAMS && theRanking->t1num!= t1; t1num++);
   
   for(t2num = 0;t2num < MAX_TEAMS && theRanking->t[t2num]!= t2; t2num++);
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
void sort(ranking_t*theRanking) {
}*/

int main(void) {
   ranking_t theRanking;
   theRankingsize
   /*theRanking->size = 0;
   theRanking->t[0] = &t1;
   theRanking->score[0] = 0;
   theRanking->goals[0] = 0;
   theRanking->size = 1;*/
   
}
