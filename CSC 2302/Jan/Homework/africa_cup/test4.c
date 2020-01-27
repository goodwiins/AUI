#include <stdio.h>
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
   char name[35];
   player_t player[20];
}team_t;

typedef struct{
   char location[30];
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

void set_ranking(ranking_t* theranking,team_t* t0,team_t* t1,match_t* m0){
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
   
}

int main(void){
   team_t t0,t1;
   ranking_t theranking;
   match_t m0;
   set_ranking(&theranking,&t0,&t1,&m0);
   
}
