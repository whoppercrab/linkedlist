test : main.o doublelinkedlist.o
	gcc -o test main.o doublelinkedlist.o

main.o : main.c
	gcc -c -o main.o main.c

doublelinkedlist.o : doublelinkedlist.c
	gcc -c -o doublelinkedlist.o doublelinkedlist.c

clean :
	rm *.o test
