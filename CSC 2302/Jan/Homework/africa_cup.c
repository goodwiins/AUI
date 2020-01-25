#include <stdio.h>
#define MAX_TEAMS 30
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
// ranking
typedef struct  {
	team_t teams[4];
	int points;
	int goals;
	int size;
}ranking_t;

typedef struct{
	int size;
    char name[30];
	player_t player[20]; 
    ranking_t; 
}team_t;

typedef struct  {
	location_t *location;
	team_t *team1, *team2;
	int score1, score2;
	char status; // status n(not yet),c(canceled), d(delayed), f(finished), and  p(in progress)
    time_t time;
    ranking_t;
}match_t;

typedef struct{
    char name[35];
    int age;
    int number;
    int goals;
}player_t;

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
    team_t

//Defining the functions
  int search_by_id(student_t* class[],int, int index);
  int search_by_name(student_t* class[],char* keyword, int index);
  int search_in(char* names,char* keyword);
  void add(student_t* class[], int index);
  void add_student(student_t* class[], student_t* , int index);
  void display_all(student_t* class[], int index);
  void sort_by_id(student_t* class[], int index);

rank_updat(&groups);


void main() {
    int n,g;
	//delcare the teams and names 
    ranking_t groups[5]=(group_a,group)
    add_teams(&groups);
    rank_update(&groups);
    printf("Choose the commande: \n ")
    scanf("%d",&n);
    for (h = 0; h < 20; h++){
        printf("-");
        }
    switch (n){
    case 1: 
        view_all(&groups);
        printf("If you ant to updated the status of a team  choose the group\n")
        scanf("%d",&n);
        view_groups(&groups);
        scanf("%d",&n);
        printf("If you ant to updated the status of a team  choose the team \n")
        
        team_update(&group[n]);
        view_update(&group[n]);

        }
        break;
    
    default:
        break;
    }
    
}