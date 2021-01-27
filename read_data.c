
# include "lab4.h"
# include<stdio.h>
# include<stdlib.h>

int read_data(FILE* f_p, Node **ptr_head){
/*function description in header file*/
int count=0;
char c1;
/*The node to be filled with data each time in the loop*/
  Node* new_node;
/*To eat up extra endline*/ 
  c1=fgetc(f_p);

  while(!feof(f_p))
{
/*dynamically allocate a new node each time*/
new_node = malloc(sizeof(Node));

/*To read in student name and ID*/
fscanf(f_p, "%[^\n]", new_node->Student.student_name);
fscanf(f_p,"%d\n",&new_node->Student.student_ID);

/*To read in the scores for first category*/
fscanf(f_p,"%f  %f  %f",&new_node->Student.Cat1.score1,&new_node->Student.Cat1.score2,&new_node->Student.Cat1.score3);

/*To read in the scores for second category*/
fscanf(f_p,"%f  %f  %f",&new_node->Student.Cat2.score1,&new_node->Student.Cat2.score2,&new_node->Student.Cat2.score3);

/*To read in the scores for third category*/
fscanf(f_p,"%f  %f  %f",&new_node->Student.Cat3.score1,&new_node->Student.Cat3.score2,&new_node->Student.Cat3.score3);

/*To read in the scores for fourth category*/
fscanf(f_p,"%f  %f  %f",&new_node->Student.Cat4.score1,&new_node->Student.Cat4.score2,&new_node->Student.Cat4.score3);

/*To eat up extra characters at the end*/
c1=fgetc(f_p); 


/*Call insert_node after creation of every node*/
/*Empty lines after the end of input from file may still create a node. To make sure those nodes are not added*/
if(new_node->Student.student_ID>0)
{
insert_node(ptr_head, new_node);
count++;
}


}
return count;
}
