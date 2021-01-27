
# include "lab4.h"
# include<stdio.h>

void option_5(Node ** ptr_head)
{

   Node* traversal=*ptr_head;
   float score;
   
   /*loop until the end of the linked list*/
   while(traversal!=NULL)
    {
/*recalculate the cumulatives for all the students*/
          calc(traversal);
/*print all recalculated values*/
   if((score=traversal->Student.Cat1.Cumulative)>=0){printf("%.2f\n",score);}else{printf("n/a");}
   if((score=traversal->Student.Cat2.Cumulative)>=0){printf("%.2f\n",score);}else{printf("n/a");}
   if((score=traversal->Student.Cat3.Cumulative)>=0){printf("%.2f\n",score);}else{printf("n/a");}
   if((score=traversal->Student.Cat4.Cumulative)>=0){printf("%.2f\n",score);}else{printf("n/a");}
   if((score=traversal->Student.Current_Grade)>=0){printf("%.2f\n",score);}else{printf("n/a");}
    traversal->Student.Final_Grade=0;
    printf("The final grade has been deleted\n");
    traversal=traversal->next;
    }

}
