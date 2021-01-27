# include "lab4.h"
# include<stdio.h>

void option_7(Node ** ptr_head)
{

float final_g;
float score=0;
Node* traversal=*ptr_head;

/*loop until the end of the linked list*/
while(traversal!= NULL)
	{
	final_g=0;
/*calculate the final grade for everyone*/
if((score=traversal->Student.Cat1.Cumulative)>0){final_g+=0.15*score;}else{final_g+=15;}
if((score=traversal->Student.Cat2.Cumulative)>0){final_g+=0.30*score;}else{final_g+=30;}
if((score=traversal->Student.Cat3.Cumulative)>0){final_g+=0.20*score;}else{final_g+=20;}
if((score=traversal->Student.Cat4.Cumulative)>0){final_g+=0.35*score;}else{final_g+=35;}

traversal->Student.Final_Grade=final_g;
traversal=traversal->next;

	}
option_3(ptr_head);

}
