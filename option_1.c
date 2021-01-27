
# include "lab4.h"
# include<stdio.h>

void option_1(Node ** ptr_head)
{
  int stud_ID;
  int found=0;
  float score=0;
  Node* traversal=*ptr_head;
  printf("Enter the student ID number:");
  scanf("%d",&stud_ID);
  
/*Print headers*/
printf("Studentname \t    StudentID        Quizzes \t\t\t      Midterms   \t \t          Homework     \t\t       Finals \t \t       Current  final\n");

printf("\t\t\t        1       2       3       Cum      1        2       3     Cum      1       2       3       Cum  \t 1       2       3      Cum\tGrade\tGrade\n");

/*loop until the required node is found*/
  while(traversal!=NULL && found==0)
   {
      if(traversal->Student.student_ID==stud_ID)
	{
/*call print_stud when the node is found*/
          print_stud(traversal);
          found=1;
	}
      else
        {
          traversal=traversal->next;
        }
   }
}
