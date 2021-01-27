
#include<stdio.h>
struct Cat_Grade{
float score1;
float score2;
float score3;
float Cumulative;
};

struct Data {
char student_name[40]; 
int student_ID;
struct Cat_Grade Cat1;
struct Cat_Grade Cat2;
struct Cat_Grade Cat3;
struct Cat_Grade Cat4;
float Current_Grade; 
float Final_Grade;
};


typedef struct Node { 
struct Data Student; 
struct Node *next;
} Node;

/*Function to read data from file and make a new node and pass it to insert_node*/
int read_data(FILE* f_p, Node **ptr_head);

/*Sorted insert function that takes in a node and adds it to the sorted list based on ID number*/
void insert_node(Node **ptr_head, Node* new_node);

/*Deletes the node with the given ID number from the list*/
void delete_node(Node **ptr_head, int stud_ID);

/*Calculates the cumulative for each of the Categories and the current grade*/
void calc(Node *new_node);

/*Function to print all details of a given student */
void print_stud(Node * stud);

/*Function to exit progrm after writing all input to a file and freeing all dynamic memory*/
void option_10(Node ** ptr_head, FILE * f_p2);

/*Deletes the node with the given ID from the list*/
void option_9(Node ** ptr_head, int stud_ID);

/*Inserts a new node into the list after user inputs all data to the console*/
void option_8(Node ** ptr_head);

/*calculate the final grades for all students*/
void option_7(Node ** ptr_head);

/*Insert a particular score for a particular student*/
void option_6(Node ** ptr_head);

/*Recalculate all student cumulatives*/
void option_5(Node ** ptr_head);

/*recalculate the current grade*/
void option_4(Node ** ptr_head);

/*Print all the information in the list*/
void option_3(Node ** ptr_head);

/*Prints the information of the student with last name*/
void option_2(Node ** ptr_head);

/*Prints the information of the student with given ID*/
void option_1(Node ** ptr_head);
