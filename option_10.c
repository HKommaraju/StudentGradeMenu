
# include "lab4.h"
# include<stdio.h>
# include<stdlib.h>

void option_10(Node ** ptr_head, FILE * f_p2)
{
    Node* traversal= *ptr_head;
/*previous node to help free memory*/
    Node* previous=NULL;
    fprintf(f_p2,"Quizzes Midterms Homework Finals\n");
    while(traversal!=NULL)
      {
/*print all required data to the file*/
        fprintf(f_p2,"%s\n",traversal->Student.student_name);
        fprintf(f_p2,"%d\n",traversal->Student.student_ID);
        fprintf(f_p2,"%.2f ",traversal->Student.Cat1.score1);
        fprintf(f_p2,"%.2f ",traversal->Student.Cat1.score2);
        fprintf(f_p2,"%.2f\n",traversal->Student.Cat1.score3);
        fprintf(f_p2,"%.2f ",traversal->Student.Cat2.score1);
        fprintf(f_p2,"%.2f ",traversal->Student.Cat2.score2);
 	fprintf(f_p2,"%.2f\n",traversal->Student.Cat2.score3);
 	fprintf(f_p2,"%.2f ",traversal->Student.Cat3.score1);
 	fprintf(f_p2,"%.2f ",traversal->Student.Cat3.score2);
 	fprintf(f_p2,"%.2f\n",traversal->Student.Cat3.score3);
 	fprintf(f_p2,"%.2f ",traversal->Student.Cat4.score1);
 	fprintf(f_p2,"%.2f ",traversal->Student.Cat4.score2);
 	fprintf(f_p2,"%.2f\n",traversal->Student.Cat4.score3);

        previous=traversal;
	traversal=traversal->next;
/*free the node previous points to*/
        free(previous);
      }

    
}
