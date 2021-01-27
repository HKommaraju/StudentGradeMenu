
all:lab4.zip lab4

lab4.zip:Makefile lab4main.c read_data.c insert_node.c calc.c print_stud.c delete_node.c option_1.c option_2.c option_3.c option_4.c option_5.c option_6.c option_7.c option_8.c option_9.c option_10.c lab4.h
	zip lab4.zip lab4main.c read_data.c insert_node.c calc.c print_stud.c delete_node.c option_1.c option_2.c option_3.c option_4.c option_5.c option_6.c option_7.c option_8.c option_9.c option_10.c lab4.h Makefile

lab4:lab4main.o read_data.o insert_node.o calc.o print_stud.o delete_node.o option_1.o option_2.o option_3.o option_4.o option_5.o option_6.o option_7.o option_8.o option_9.o option_10.o
	gcc lab4main.o read_data.o insert_node.o calc.o print_stud.o delete_node.o option_1.o option_2.o option_3.o option_4.o option_5.o option_6.o option_7.o option_8.o option_9.o option_10.o -o lab4

lab4main.o: lab4main.c lab4.h
	gcc -ansi -pedantic -c lab4main.c

read_data.o:read_data.c lab4.h
	gcc -ansi -pedantic -c read_data.c

insert_node.o:insert_node.c lab4.h
	gcc -ansi -pedantic -c insert_node.c

calc.o:calc.c lab4.h
	gcc -ansi -pedantic -c calc.c

print_stud.o: print_stud.c lab4.h
	gcc -ansi -pedantic -c print_stud.c

delete_node.o: delete_node.c lab4.h
	gcc -ansi -pedantic -c delete_node.c

option_1.o: option_1.c lab4.h
	gcc -ansi -pedantic -c option_1.c

option_2.o: option_2.c lab4.h
	gcc -ansi -pedantic -c option_2.c

option_3.o: option_3.c lab4.h
	gcc -ansi -pedantic -c option_3.c

option_4.o: option_4.c lab4.h
	gcc -ansi -pedantic -c option_4.c

option_5.o: option_5.c lab4.h
	gcc -ansi -pedantic -c option_5.c

option_6.o: option_6.c lab4.h
	gcc -ansi -pedantic -c option_6.c

option_7.o: option_7.c lab4.h
	gcc -ansi -pedantic -c option_7.c

option_8.o: option_8.c lab4.h
	gcc -ansi -pedantic -c option_8.c

option_9.o: option_9.c lab4.h
	gcc -ansi -pedantic -c option_9.c

option_10.o: option_10.c lab4.h
	gcc -ansi -pedantic -c option_10.c

clean:
	rm -rf *.o lab4 lab4.zip
