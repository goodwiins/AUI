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



void main(){
   team_t t1; 
   ranking_t theranking;
   

}