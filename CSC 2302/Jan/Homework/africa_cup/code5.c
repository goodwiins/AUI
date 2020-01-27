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
   int points;
   int goals;
}team_t;

typedef struct{
   //char location[6];
   team_t *team1, *team2;
   int score1, score2;
   date_t time;
   char status; // status (not yet, delayed, canceled, finished, in progress)
}match_t;

void add_team(team_t *group, team_t t, int index){
   group[index] = t;
}
/*typedef struct{
   team_t teams[MAX_TEAMS];
   int points[MAX_TEAMS];
   //int size;
}cup_t;*/
 //not worth the hustle ""

/*void set_match(team_t* group,team_t* t0,team_t* t1,match_t* m0){
   group->size =0;
   group->teams[0]=*t0;
   group->points[0]=0;
   group->size = 1;
   group->teams[1]=*t1;
   group->points[1]=0;
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
// sorry the function is out of service for the following reason: Thread 1: EXC_BAD_ACCESS (code=1, address=0x7ffeefc48c14)
//also i need to make an array of pointers of type team, put pointers there and then sort them by pointes

/*void set_ranking(team_t* group,match_t* match) {
    team_t *t1, *t2;
    int t1num=0, t2num=1;
    t1 = match->team1;
    t2 = match->team2;
       if (match->score1 > match->score2)
          group->points[t1num] +=3;
       else if (match->score2 > match->score1)
            group->points[t2num] += 3;
       else {
          group->points[t1num] ++;
          group->points[t2num] ++;
       }
   group->points[t1num]+= match->score1;
   group->points[t2num]+= match->score2;

    //sort(group); //go back to line 72
}

show_ranking(team_t* group){
   
}*/
void sort_point(team_t* group ){
   int c,d;
   team_t swap;
   for (c = 0 ; c < MAX_TEAMS - 1; c++){
     for (d = 0 ; d < MAX_TEAMS - c - 1; d++){
        if (group[d].points < group[d+1].points){
         swap = group[d];
         group[d] = group[d+1];
         group[d+1] = swap;
       }
     }
   }
}

int main(void){
   // it didin't workout in sorting so basically im gonna move on to other stuff
   int index=0;
   team_t group[MAX_TEAMS];
   team_t team1,team2;//for matches
   match_t match;
   //adding teams
      
      add_team(group,t1,index++);
      add_team(group,t2,index++);
      add_team(group,t3,index++);
      add_team(group,t4,index++);
   sort_point(&group);
   /*set_match(&group,&t0,&t1,&match); //Working 100%
   set_ranking(&group, &match); //Working 100%
   show_ranking(&group);*/

}
