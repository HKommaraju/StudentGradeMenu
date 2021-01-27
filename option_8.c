
# include "lab4.h"
# include<stdio.h>
# include<stdlib.h>

void option_8(Node ** ptr_head)
{
  int charval=0;int i;
  Node* new_node;
  new_node = malloc(sizeof(Node));

  /*Input all data from the user*/
  printf("Enter student_ID: ");
  scanf("%d",&new_node->Student.student_ID);

  /*Loop through char by char to take in the whole string*/
  printf("Enter student name:");
  getchar();
  for(i=0;i<39;i++)
   {
      charval=getchar();
      if(charval != 10)
        {
           new_node->Student.student_name[i]=(char)charval;
        }
      else
        {
	   new_node->Student.student_name[i] = '\0';
           break;
	}
   }

  printf("Enter the three scores for the first category: \n");
  scanf("%f %f %f",&new_node->Student.Cat1.score1,&new_node->Student.Cat1.score2,&new_node->Student.Cat1.score3);

  printf("Enter the three scores for the second category: \n");
  scanf("%f %f %f",&new_node->Student.Cat2.score1,&new_node->Student.Cat2.score2,&new_node->Student.Cat2.score3);


  printf("Enter the three scores for the third category: \n");
  scanf("%f %f %f",&new_node->Student.Cat3.score1,&new_node->Student.Cat3.score2,&new_node->Student.Cat3.score3);

/*Calculate all cumulatives and current grade*/
  calc(new_node);
/*insert created node into the linked list*/
  insert_node(ptr_head,new_node);
}
  



