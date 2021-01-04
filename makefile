W = -g -Wall
all: txtfind isort

isort: isort.o 
	gcc $(W) isort.o -o isort

isort.o: isort.c
	gcc $(W) -c isort.c
	
txtfind: txtfind.o
	gcc $(W) txtfind.o -o txtfind

txtfind.o: txtfind.c 
	gcc $(W) -c txtfind.c
clean:
	rm *.o txtfind isort
