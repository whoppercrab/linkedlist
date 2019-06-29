test : main.o linkedlist.o
	gcc -o test main.o linkedlist.o

main.o : main.c
	gcc -c -o main.o main.c

linkedlist.o : linkedlist.c
	gcc -c -o linkedlist.o linkedlist.c

clean :
	rm *.o test
