#include <stdio.h>
#define TEAMS 16
typedef struct{
    // 24 hrs no AM pm
    int hour;
    int minute;
}hour_t;

typedef struct{
    char stadium[30];
    char city[10];
}location_t;
typedef struct{
	int day;
    int month;
    int year;
    hour_t hour;
}time_t;
typedef struct  {
	location_t *location;
	team_t *team1, *team2;
	int score1, score2;
	char status; // status n(not yet),c(canceled), d(delayed), f(finished), and  p(in progress)
    time_t time;
    ranking_t;
}match_t;
typedef struct{
    char name[30];
	int points;
    int goals;
    int ranking; 
}team_t;

void add_team(team_t* botola[],team_t* team,int index){
    botola[index]=team;
}
void add_teams(team_t* botola[],int index){
    team_t botola[0]={.name=""};

}

void main(){
    team_t* botola[TEAMS];
    int index=0;



}