
# include "lab4.h"
# include<stdio.h>
# include<string.h>

void option_2(Node ** ptr_head)
{
  char* p;
  char s1[50];
  float score=0;
  int found=0;
  Node* traversal=*ptr_head;
  printf("Enter the student last name:");
  scanf("%s",s1);
  
/*Print headers*/
printf("Studentname \t    StudentID        Quizzes \t\t\t      Midterms   \t \t          Homework     \t\t       Finals \t \t       Current  final\n");

printf("\t\t\t        1       2       3       Cum      1        2       3     Cum      1       2       3       Cum  \t 1       2       3      Cum\tGrade\tGrade\n");

/*loop until the required node is found*/
  while(traversal!=NULL && found==0)
   {
      p=(char*)strstr(traversal->Student.student_name,s1); 
      if(p)
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
