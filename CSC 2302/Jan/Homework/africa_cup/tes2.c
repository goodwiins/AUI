#include <stdio.h>
//#include "agricacup.h"

#define MAX_TEAMS 30

// ranking

struct ranking {
   struct team *t[MAX_TEAMS];
   int points[MAX_TEAMS];
   int goals[MAX_TEAMS];
   int size;
};

struct time {
   int t;
   // Needs date and hour.
};

// matches

// date and hour string? 3 numbers?
// location
// score (home, away)
// team1, team2
// status (not yet, delayed, canceled, finished, in progress)

struct match {
   char *location;
   struct team *team1, *team2;
   int score1, score2;
   char status;
   struct time t;
};

// teams
// roster/lineup
struct team {
   int size;
   player_t player[20];
   char name[35];
};

typdef int player_t;

// player
// age
// history
// name
// number

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

void main() {
   struct team t1 = { };
   struct ranking theRanking;
   theRanking->size = 0;
   theRanking->t[0] = &t1;
   theRanking->score[0] = 0;
   theRanking->goals[0] = 0;
   theRanking->size = 1;
   
}
