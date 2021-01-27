
# include "lab4.h"
# include<stdio.h>

void option_6(Node ** ptr_head)
{
 int stud_ID;int cat;int scr;
 float new_s;int found=0;
 Node *traversal = *ptr_head;

/*Asking for which student to modify*/
 printf("Enter the student ID: ");
 scanf("%d",&stud_ID);

/*Getting in the category and scoree number*/
 printf("Enter the category\n");
 printf("1.quizzes\n2.Midterms\n3.Homeworks\n4.Final\n");
 scanf("%d",&cat);

 printf("Enter 1, 2 or 3 for which score you want to change? \n");
 scanf("%d",&scr);

/*The new score to be updated to*/
 printf("Enter the new score: \n");
 scanf("%f",&new_s);

/*loop until the required node is found*/
 while(traversal!=NULL && found==0)
   {
      if(traversal->Student.student_ID==stud_ID)
	{
/*if statements to determine which score is to be updated*/
          if(cat==1)
	    {if(scr==1){ traversal->Student.Cat1.score1=new_s;}
	   else if(scr==2){ traversal->Student.Cat1.score2=new_s;}
           else{ traversal->Student.Cat1.score3=new_s;}}

	else if(cat==2)
	    {if(scr==1){ traversal->Student.Cat2.score1=new_s;}
	   else if(scr==2){ traversal->Student.Cat2.score2=new_s;}
           else{ traversal->Student.Cat2.score3=new_s;}}

	else if(cat==3)
	    {if(scr==1){ traversal->Student.Cat3.score1=new_s;}
	   else if(scr==2){ traversal->Student.Cat3.score2=new_s;}
           else{ traversal->Student.Cat3.score3=new_s;}}

	else 
	    {if(scr==1){ traversal->Student.Cat4.score1=new_s;}
	   else if(scr==2){ traversal->Student.Cat4.score2=new_s;}
           else{ traversal->Student.Cat4.score3=new_s;}}

/*recalculate the cumulative after */
	calc(traversal);

	found=1;
        }

	else
	{
	   traversal=traversal->next;
	}
}
}

