#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    char fname[20];
    char lname[20];
    char number[30];
}contact_t;

   void add(void);
   void search(void);
   void del(void);
   void disp(void);
   void update(void);



int main(void){
   int c;
   printf("------Select One Of The Choices------\n\n");
   printf("(1)\tAdd contact\n");
   printf("(2)\tView All contact's\n");
   printf("(3)\tSearch contact\n");
   printf("(4)\tDelete A contact\n");
   printf("(5)\tUpdate A contact\n");
   printf("(6)\tExit\n\n\n");
   scanf("%d",&c);
   switch(c){
      case 1:
            add();
            break;
      case 2:
            disp();
            break;
      case 3:
            search();
            break;
      case 4:
            del();
            break;
      case 5:
            update();
            break;
      case 6:
            exit(0);
            break;
   }
   
}

void add(){
   FILE *fp= fopen("contacts.bin","a");
   contact_t s;
   printf("\n\t\tEnter The contact first name: ");
   scanf("%s",s.fname);
   printf("\n\t\tEnter The contact last name: ");
   scanf("%s",s.lname);
   printf("\n\t\tEnter The contact number: ");
   scanf("%s", s.number);
   fprintf(fp,"\n%s %s %s",s.fname,s.lname, s.number);
   fclose(fp);
   printf("\n\n\t\tcontact Added Sucessfully");
}

void disp(){
    contact_t s;
    FILE *fp= fopen("contacts.bin","r");
    printf("\n\tFirst Name\t Last Name\tNumber\n");
   while(!feof(fp)){
   fscanf(fp, "%s %s %s",s.fname,s.lname, s.number);
   printf("\t%s\t%s\t%s\n",s.fname,s.lname,s.number);
   }

    fclose(fp);
}

void search(){
    FILE *fp;
   char searchh[30];
   contact_t s;
    printf("\n\n\t\tEnter The Number You Want To Search: ");
    scanf("%s",searchh);
    fp = fopen("contacts.bin","r");
   while(!feof(fp)){
     fscanf(fp, "%s %s %s",s.fname,s.lname, s.number);
         if(!strcmp(s.number,searchh)){
             printf("\n Contact found. This contact belongs to %s %s\n", s.fname, s.lname);
             fclose(fp);
            return;
            
         }
     }
   printf("\n Contact not found.\n");
   
  
    fclose(fp);

}

void del()
{
    FILE *fp, *temp;
   char search[30];
   char line[100];
   contact_t s;
    printf("\n\n\t\tEnter The Number of the Contact you want to delete ");
    scanf("%s",search);
    fp = fopen("contacts.bin","r");
   temp = fopen("temp.bin","w");
   
   while(!feof(fp)){
     fscanf(fp, "%s %s %s",s.fname,s.lname, s.number);
         if(strcmp(s.number,search)){ // if not equal
             fprintf(temp,"\n%s %s %s",s.fname, s.lname, s.number);
         }
     }
   fclose(fp);
   fclose(temp);
   fp = fopen("contacts.bin","w");
   temp = fopen("temp.bin","r");
   while(!feof(temp)){ //copy back without that one line
   fscanf(temp, "%s",line);
   fprintf(fp,"%s",line);
       }
   fclose(fp);
   fclose(temp);

  }
