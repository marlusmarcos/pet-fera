CC = g++
CPPFLAGS = -g -c -Wall -ansi -pedantic -O0 -std=c++11
OBJS = Funcionario.o Animal.o Veterinario.o Tratador.o
PROG = exe

.DEFAULT_GOAL = Main

Funcionario.o: Funcionario.cpp Funcionario.h
	$(CC) Funcionario.cpp -c 

Animal.o: Animal.cpp Animal.h
	$(CC) Animal.cpp -c

Veterinario.o: Veterinario.cpp Veterinario.h 
	$(CC) Veterinario.cpp -c 

Tratador.o: Tratador.cpp Tratador.h
	$(CC) Tratador.cpp -c 

Main: Main.cpp Funcionario.o Animal.o Veterinario.o Tratador.o
	$(CC) $(OBJS) Main.cpp -o $(PROG)

clear:
	rm *.o
	rm $(PROG)