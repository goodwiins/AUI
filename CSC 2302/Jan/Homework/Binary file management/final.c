#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    char fname[20];
    char lname[20];
    char number[20];
}contact_t;

   void add(void);
   void search(void);
   void disp(void);


int main(void){
   int c;
      printf("------Select One Of The Choices------\n\n");
      printf("(1)\tAdd contact\n");
      printf("(2)\tView All contact's\n");
      printf("(3)\tSearch contact\n");
      printf("(4)\tExit\n\n\n");
      
      do {
         printf("\n choice:");
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
      }

      }while(c!=4);
      
   
}
void add(){
   FILE *fp= fopen("contact1.bin","ab");
   contact_t s;
   printf("\n\t\tEnter The contact first name: ");
   scanf("%s",s.fname);
   printf("\n\t\tEnter The contact last name: ");
   scanf("%s",s.lname);
   printf("\n\t\tEnter The contact number: ");
   scanf("%s", s.number);
   fwrite(&s,sizeof(contact_t),1,fp);
   fclose(fp);
   printf("\n\n\t\tcontact Added Sucessfully");
}

void disp(){
    contact_t s;
    FILE *fp= fopen("contact1.bin","rb");
    printf("\n\tFirst Name\t Last Name\tNumber\n");
   while(!feof(fp)){
    fread(&s,sizeof(s),1,fp);
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
    fp = fopen("contact1.bin","rb");
   while(!feof(fp)){
      fread(&s,sizeof(s),1,fp);
         if(!strcmp(s.number,searchh)){
             printf("\n Contact found. This contact belongs to %s %s\n", s.fname, s.lname);
             fclose(fp);
            return;
            
         }
     }
   printf("\n Contact not found.\n");
  fclose(fp);

}
