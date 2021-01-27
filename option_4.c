
# include "lab4.h"
# include<stdio.h>

void option_4(Node ** ptr_head)
{

   Node* traversal=*ptr_head;
   int found=0;
   int stud_ID;
   float score;
   printf("Enter the student ID: \n");
   scanf("%d",&stud_ID);
 
/*looping till the required node is found*/
   while(traversal!=NULL && found==0)
    {
       if(traversal->Student.student_ID==stud_ID)
        {
/*Recalculate cumulatives and current grade by caalling calc*/
          calc(traversal);

/*print all recalculated scores to the console*/
   if((score=traversal->Student.Cat1.Cumulative)>=0){printf("%.2f\n",score);}else{printf("n/a");}
   if((score=traversal->Student.Cat2.Cumulative)>=0){printf("%.2f\n",score);}else{printf("n/a");}
   if((score=traversal->Student.Cat3.Cumulative)>=0){printf("%.2f\n",score);}else{printf("n/a");}
   if((score=traversal->Student.Cat4.Cumulative)>=0){printf("%.2f\n",score);}else{printf("n/a");}
   if((score=traversal->Student.Current_Grade)>=0){printf("%.2f\n",score);}else{printf("n/a");}
    traversal->Student.Final_Grade=0;
    printf("The final grade has been deleted\n");
    found=1;
        }
       else
 	{
          traversal=traversal->next;
	}
    }

}
