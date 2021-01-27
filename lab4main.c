
# include <stdio.h>
# include <stdlib.h> 
# include "lab4.h"

int main(int argc, char *argv[])
{
/*Pointer to the head */
Node* head = (struct Node*)malloc(sizeof(struct Node));
Node** ptr_head = & head;
Node* traversal;

char* filename1 = argv[1];
char* filename2 = argv[2];
int count=0;int option=0; int stud_ID;
char c[100];
char *ch;
FILE *f_p2;
/*opening the file to be read from*/
FILE *f_p = fopen(filename1,"r");
/*assigning an array of function pointers*/
void (*fp[7])(Node **);
/*assigning each option to appropriate index*/
fp[0]=option_1;
fp[1]=option_2;
fp[2]=option_3;
fp[3]=option_4;
fp[4]=option_5;
fp[5]=option_6;
fp[6]=option_7;


head=NULL;

/*Check to ensure file is opened*/
if(f_p == NULL )
{
printf("Error opening input file");
}

else
{
/*To input the line containing the categories*/
 fscanf(f_p, "%[^\n]", c);
/*calling function to read the data from the file*/
 count=read_data(f_p,ptr_head);
/*closing the file pointer*/
 fclose(f_p);
}

/*opening the file to write to*/
f_p2 = fopen(filename2,"w");
   
printf("Data has been read in for %d students\n",count);

/*loop running till the client wants to quit(option=10)*/
while(option!=10)
{
  printf("Enter an option between 1 to 10.\n");
  printf("1)  Print Student Scores by Student ID\n");
  printf("2)  Print Student Scores by Last Name\n");
  printf("3)  Print Student Scores for All Students\n");
  printf("4)  Recalculate Student Scores for a Single Student ID\n");
  printf("5)  Recalculate All Student Scores\n");
  printf("6)  Insert a score for a specific Student ID\n");
  printf("7)  Calculate Final Grades\n");
  printf("8)  Add a new student\n");
  printf("9)  Delete a student\n");
  printf("10) Exit Program\n");

  scanf("%d",&option);

  switch(option)
{
   case 1:
   case 2:
   case 3:
   case 4:
   case 5:
   case 6:
   case 7:
/*calling the appropriate function based on the option chosen*/
     fp[option-1](ptr_head);
     break;
  case 8:
     option_8(ptr_head);
     break;
  case 9:
     printf("Enter the ID of student you want to delete: \n");
     scanf("%d",&stud_ID);
     option_9(ptr_head,stud_ID);
     break;
  case 10:
     option_10(ptr_head,f_p2);
     fclose(f_p2);
     break;

  printf("Enter the option:");
  scanf("%d",&option);
}
}
return 0;
}

