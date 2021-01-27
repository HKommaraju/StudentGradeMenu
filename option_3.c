
# include "lab4.h"
# include<stdio.h>

void option_3(Node ** ptr_head)
{
  float score=0;
  Node* traversal=*ptr_head;
 

  /*Print headers*/
printf("Studentname \t    StudentID        Quizzes \t\t\t      Midterms   \t \t          Homework     \t\t       Finals \t \t       Current  final\n");

printf("\t\t\t        1       2       3       Cum      1        2       3     Cum      1       2       3       Cum  \t 1       2       3      Cum\tGrade\tGrade\n");

/*Loop until every node is printed*/
  while(traversal!=NULL)
   {
      print_stud(traversal);
      traversal=traversal->next;

   }
}
