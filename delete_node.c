
# include "lab4.h"
# include<stdio.h>
# include<stdlib.h>

void delete_node(Node **ptr_head, int stud_ID)
{

int deleted=0;
/*Node to traverse through the linked list*/
struct Node* traversal= *ptr_head;
/*Node to access the previous position to insert the node*/
struct Node* previous= NULL;

/*case when there is nothing to delete*/
if(*ptr_head ==NULL)
{
  printf("Error no node to delete\n");
}

/*case when the first node is the node to be deleted*/
else if((*ptr_head)->Student.student_ID==stud_ID)
{

*ptr_head=traversal->next;
free(traversal);

}

else
{
  while(traversal!=NULL && !deleted)
   {
/*when the ID is identified using ID number*/             
      if(traversal->Student.student_ID==stud_ID)
         {
            previous->next=traversal->next;
            free(traversal);
            deleted=1;
         }
 
      else
         {
/*move traversal and previous along*/
            previous=traversal;
            traversal=traversal->next;
         }
    }
/*if not found in the list throw error*/
        if(deleted==0)
         {
               printf("No record with such data found\n");
         }
}

}

