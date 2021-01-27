# StudentGradeMenu
A project to take in student information including student ID, first and last name and multiple grades for a single student and generate a grade menu.

The program will take in both an input file and an output file. The input file should contain all the student information in the format mentioned below and the output file will contain the records after calculating all cummulative values for the student entries (the output file can be used as an input file in the nect cycle). 

The format for input files:

Quizzes Midterms Homework Final \
Smith, John \
11211 \
100	100	100 \
100	100	100 \
100	100	100 \
100	-1	-1 \
Gassner, Brunilda   
12764 \
0	87.5	90 \
-1	93.1	-1 \
80.62	89.3	96.7 \
93	-1	-1 

The first line should contain the order of the exams for which the grades are in the file namely Quizzes Midterms Homework and Final.
The subsequent entries will be in the format of Lastname, firstname followed by the student ID in the nextline, and then the three grades for quizzes, then midterms, then homework, then final(each grade is a floating point seperated by a space). The next record will start immediately after the end of the last grade row.

After taking in this information, the project will produce a menu of 10 options. 

1. Finding and printing all student information for given student ID. 
2. Finding and printing all student information for the first student with the given lastname. 
3. Print a sorted list of all student records along with the calculated cummulative scores and a summary line containing average for each category across all students. 
4. Recalculate all grades of a single student selected by student ID assuming that new scores have been entered since the last calculationm and print out the student’s name, the  four current cumulatives by category and their current overall grade. 
5. Recalculate all student’s grades assuming that new scores have been entered since the last calculation and print out each student’s name, the four current cumulatives by category and their current overall grade. 
6. Insert a new score for a single student chosen by ID # by asking which category it’s for and whether it should be stored in the first, second or third score position. 
7. Calculate the final grade and store it in the appropriate spot for each student based on the following weighting system: Category 1 cumulative = 15% of the grade, Category 2 cumulative = 30% of the grade, Category 3 cumulative = 20% of the grade and Category 4 cumulative is 35% of the grade. If any category cumulative score is -1, then 0 is used for the calculation. 
8. Add a new sudent to the class by prompting for every data field. 
9. Deleting an entry based on student ID. 
10. Exit the program and write all existing student data to the ouptut file. 

The project comes with a makefile for easy execution. The 'make' command generates the executable called 'lab4' and also creates a zip file containing all the source code siles under then name lab4.zip. To only generate the executable, simply do 'make lab4'. The makefile also has commands for making object files for each specific .c file inlcuding lab4main and all 10 options as well. 

To run the program in command line, import all files into one folder
1. make/make lab4 
2. lab4 filename1 filename2  

where filename1 is the input file and filename2 is the output file. They can be the same files if desired.
