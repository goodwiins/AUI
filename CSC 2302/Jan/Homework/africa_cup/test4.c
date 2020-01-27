#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_TEAMS 4 //It's 4 nations per group

typedef struct{
   char name[30];
   int age;
   int number;
}player_t;

typedef struct {
   int hour;
   int minute;
   int day;
   int month;
}date_t;


typedef struct  {
   char name[35];
   player_t player[20];
}team_t;

typedef struct{
   char location[6];
   team_t *team1, *team2;
   int score1, score2;
   date_t time;
   char status; // status (not yet, delayed, canceled, finished, in progress)
}match_t;

typedef struct{
   team_t teams[MAX_TEAMS];
   int points[MAX_TEAMS];
   int size;
}ranking_t;


void set_match(ranking_t* theranking,team_t* t0,team_t* t1,match_t* m0){
   theranking->size =0;
   theranking->teams[0]=*t0;
   theranking->points[0]=0;
   theranking->size = 1;
   theranking->teams[1]=*t1;
   theranking->points[1]=0;
   m0->team1= t0;
   m0->team2= t1;
   m0->time.hour = 8;
   m0->time.minute = 30;
   m0->time.day =3;
   m0->time.month =9;
   m0->status = 'F';
   //strcpy(m0->location,"Stadium"); the error= Thread 1: EXC_BAD_INSTRUCTION (code=EXC_I386_INVOP, subcode=0x0)
   m0->score1 =3;
   m0->score2 =1;
   
}

/*void sort(ranking_t* theranking ){
   int c,d;
   ranking_t swap;
   for (c = 0 ; c < MAX_TEAMS - 1; c++){
     for (d = 0 ; d < MAX_TEAMS - c - 1; d++){
        if (theranking->points[d] < theranking->points[d+1]){
         swap = theranking[d];
         theranking[d] = theranking[d+1];
         theranking[d+1] = swap;
       }
     }
   }
}*/
// sory function is out of service for the following reason: Thread 1: EXC_BAD_ACCESS (code=1, address=0x7ffeefc48c14)

 void set_ranking(ranking_t* theranking,match_t* match) {
    // look in the match, and find the teams. Check which team won.
    // Add points to both teams in the ranking.
    // Adjust the ranking.
    team_t *t1, *t2;
    int t1num=0, t2num=1;
    t1 = match->team1;
    t2 = match->team2;
    
       if (match->score1 > match->score2)
          theranking->points[t1num] +=3;
       else if (match->score2 > match->score1)
            theranking->points[t2num] += 3;
       else {
          theranking->points[t1num] ++;
          theranking->points[t2num] ++;
       }
   theranking->points[t1num]+= match->score1;
   theranking->points[t2num]+= match->score2;

    //sort(theranking); //go back to line 72
 }

show_ranking(ranking_t *theranking){
   int i;
   for ( i = 0; i < MAX_TEAMS; i++){
      printf("Team %d, is at position %d, with ")
   }
   


}
int main(void){
   team_t t0,t1;
   ranking_t theranking;
   match_t match;
   set_match(&theranking,&t0,&t1,&match);
   set_ranking(&theranking, &match);
   show_ranking(&theranking);
}