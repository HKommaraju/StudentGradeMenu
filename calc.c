
# include "lab4.h"
# include<stdio.h>

void calc(Node *new_node)
{
float cuml=0,score=0,count=0;int negs=0;
  if((score=new_node->Student.Cat1.score1)>=0)
{count++; cuml+=score;}else{negs++;}
if((score=new_node->Student.Cat1.score2)>=0)
{count++; cuml+=score;}else{negs++;}
if((score=new_node->Student.Cat1.score3)>=0)
{count++; cuml+=score;}else{negs++;}

if(negs==3){new_node->Student.Cat1.Cumulative=-1;}else{new_node->Student.Cat1.Cumulative=cuml/count;}

score=0;cuml=0;count=0;negs=0;

if((score=new_node->Student.Cat2.score1)>=0)
{count++; cuml+=score;}else{negs++;}
if((score=new_node->Student.Cat2.score2)>=0)
{count++; cuml+=score;}else{negs++;}
if((score=new_node->Student.Cat2.score3)>=0)
{count++; cuml+=score;}else{negs++;}

if(negs==3){new_node->Student.Cat2.Cumulative=-1;}else{new_node->Student.Cat2.Cumulative=cuml/count;}

score=0;cuml=0;count=0;negs=0;

if((score=new_node->Student.Cat3.score1)>=0)
{count++; cuml+=score;}else{negs++;}
if((score=new_node->Student.Cat3.score2)>=0)
{count++; cuml+=score;}else{negs++;}
if((score=new_node->Student.Cat3.score3)>=0)
{count++; cuml+=score;}else{negs++;}

if(negs==3){new_node->Student.Cat3.Cumulative=-1;}else{new_node->Student.Cat3.Cumulative=cuml/count;}

score=0;cuml=0;count=0;negs=0;

if((score=new_node->Student.Cat4.score1)>=0)
{count++; cuml+=score;}else{negs++;}
if((score=new_node->Student.Cat4.score2)>=0)
{count++; cuml+=score;}else{negs++;}
if((score=new_node->Student.Cat4.score3)>=0)
{count++; cuml+=score;}else{negs++;}

if(negs==3){new_node->Student.Cat4.Cumulative=-1;}else{new_node->Student.Cat4.Cumulative=cuml/count;}

cuml=0;
if((score=new_node->Student.Cat1.Cumulative)>=0){cuml+=0.15*score;}else{cuml+=15;}
if((score=new_node->Student.Cat2.Cumulative)>=0){cuml+=0.30*score;}else{cuml+=30;}
if((score=new_node->Student.Cat3.Cumulative)>=0){cuml+=0.35*score;}else{cuml+=35;}
if((score=new_node->Student.Cat4.Cumulative)>=0){cuml+=0.10*score;}else{cuml+=10;}

new_node->Student.Current_Grade=cuml;
new_node->Student.Final_Grade=-1;

}
