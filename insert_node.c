
# include "lab4.h"
# include<stdio.h>
# include<stdlib.h>

void insert_node(Node **ptr_head,Node* new_node){

int inserted=0;
/*Node to traverse through the linked list*/
struct Node* traversal= *ptr_head;
/*Node to access the previous position to insert the node*/
struct Node* previous= NULL;

/*calculate cumulatives*/
calc(new_node);

/*case if the list is empty*/
if(*ptr_head ==NULL)
{
  
  *ptr_head=new_node;
  new_node->next=NULL;
}

/*case when the node to be added is infront of the first node*/
else if((*ptr_head)->Student.student_ID>new_node->Student.student_ID)
{

new_node->next=*ptr_head;
*ptr_head=new_node;
}

/*all other cases when the node to be inserted is in between two other nodes*/
else
{
   
  while(traversal!=NULL && inserted==0)
   {
       /*When the ID is less greater than the traversal, it needs to be added to the position before*/       
      if(traversal->Student.student_ID>new_node->Student.student_ID)
         {
            previous->next=new_node;
            new_node->next=traversal;
            inserted=1;
         }
 
      else
         {
/*move traversal and previous along the list*/
            previous=traversal;
            traversal=traversal->next;
         }
    }

/*if end of list is achieved and the node has not been added yet, it is added to the end*/
        if(inserted==0)
         {
               previous->next=new_node;
               new_node->next=NULL; 
         }
}

}




