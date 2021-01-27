
# include "lab4.h"
# include<stdio.h>

void print_stud(Node * stud)
{
/*function description in header file*/
  float score=0;
  Node* traversal=stud;
 /*node to access what stud points to*/

/*printing the name and ID with indent*/

    printf("%-22s %5d  ", traversal->Student.student_name, traversal->Student.student_ID);

/*print all Cat1 score , cumulative and Final grade*/

if((score=traversal->Student.Cat1.score1)>=0){printf("%.2f\t",score);}else{printf("n/a\t");}
if((score=traversal->Student.Cat1.score2)>=0){printf("%.2f\t",score);}else{printf("n/a\t");}
if((score=traversal->Student.Cat1.score3)>=0){printf("%.2f\t",score);}else{printf("n/a\t");}
if((score=traversal->Student.Cat1.Cumulative)>=0){printf("%.2f\t",score);}else{printf("n/a\t");}

/*print all Cat2 score , cumulative and Final grade*/

if((score=traversal->Student.Cat2.score1)>=0){printf("%.2f\t",score);}else{printf("n/a\t");} 
if((score=traversal->Student.Cat2.score2)>=0){printf("%.2f\t",score);}else{printf("n/a\t");}
if((score=traversal->Student.Cat2.score3)>=0){printf("%.2f\t",score);}else{printf("n/a\t");}
if((score=traversal->Student.Cat2.Cumulative)>=0){printf("%.2f\t",score);}else{printf("n/a\t");}


/*print all Cat3 score , cumulative and Final grade*/
if((score=traversal->Student.Cat3.score1)>=0){printf("%.2f\t",score);}else{printf("n/a\t");}
if((score=traversal->Student.Cat3.score2)>=0){printf("%.2f\t",score);}else{printf("n/a\t");}
if((score=traversal->Student.Cat3.score3)>=0){printf("%.2f\t",score);}else{printf("n/a\t");}
if((score=traversal->Student.Cat3.Cumulative)>=0){printf("%.2f\t",score);}else{printf("n/a\t");}


/*print all Cat4 score , cumulative and Final grade*/
if((score=traversal->Student.Cat4.score1)>=0){printf("%.2f\t",score);}else{printf("n/a\t");}
if((score=traversal->Student.Cat4.score2)>=0){printf("%.2f\t",score);}else{printf("n/a\t");}
if((score=traversal->Student.Cat4.score3)>=0){printf("%.2f\t",score);}else{printf("n/a\t");}
if((score=traversal->Student.Cat4.Cumulative)>=0){printf("%.2f\t",score);}else{printf("n/a\t");}

/*printing the current and final grade*/
if((score=traversal->Student.Current_Grade)>=0){printf("%.2f\t",score);}else{printf("n/a\t");}
if((score=traversal->Student.Final_Grade)>=0){printf("%.2f\n",score);}else{printf("n/a\n");}
 	   
  
}
