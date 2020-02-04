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



int main(void){
   int c=0;
   printf("------Select One Of The Choices------\n\n");
   printf("(1)\tAdd contact\n");
   printf("(2)\tView All contact's\n");
   printf("(3)\tSearch contact\n");
   printf("(4)\tDelete A contact\n");
   printf("(5)\tExit\n\n\n");
   
   
   while (c!=5){
     printf("Choice:");
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
      default: printf("Wrong input");
   }
   }
  
   
}

void add(){
   FILE *fp= fopen("contact.txt","a");
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
    FILE *fp= fopen("contact.txt","r");
    printf("\n\t\tFirst Name\t\tLast Name\t\tNumber\n");
   while(!feof(fp)){
   fscanf(fp, "%s %s %s",s.fname,s.lname, s.number);
   printf("\t\t%s\t\t%s\t\t%s\n",s.fname,s.lname,s.number);
   }

    fclose(fp);
}

void search()
{
    FILE *fp;
   char searchh[30];
   contact_t s;
    printf("\n\n\t\tEnter The Number You Want To Search: ");
    scanf("%s",searchh);
    fp = fopen("contact.txt","r");
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
   int found=0;
   contact_t s;
    printf("\n\n\t\tEnter The Number of the Contact you want to delete ");
    scanf("%s",search);
    fp = fopen("contact.txt","r");
   temp = fopen("temp.txt","w");
   
   while(!feof(fp)){
     fscanf(fp, "%s %s %s",s.fname,s.lname, s.number);
         if(strcmp(s.number,search)){ // if not equal
             fprintf(temp,"%s %s %s\n",s.fname, s.lname, s.number);
             found = 1;
         }
     }
   fclose(fp);
   fclose(temp);
   if (found==1)
   { fp = fopen("contact.txt","w");
   temp = fopen("temp.txt","r");
   while(!feof(temp)){ //copy back without that one line
   fscanf(temp, "%s %s %s",s.fname,s.lname, s.number);
   fprintf(fp,"%s %s %s\n",s.fname, s.lname, s.number);
       }
   fclose(fp);
   fclose(temp);
     }
  else 
  printf("Not Found\n");

  

  }

