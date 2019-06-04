CC = g++
CPPFLAGS = -g -c -Wall -ansi -pedantic -O0 -std=c++11
OBJS = Animal.o Funcionario.o Veterinario.o Tratador.o Anfibio.o Mamifero.o Reptil.o
PROG = exe

.DEFAULT_GOAL = Main

Animal.o: Animal.cpp Animal.h
	$(CC) Animal.cpp -c

Funcionario.o: Funcionario.cpp Funcionario.h
	$(CC) Funcionario.cpp -c 

Veterinario.o: Veterinario.cpp Veterinario.h 
	$(CC) Veterinario.cpp -c 

Tratador.o: Tratador.cpp Tratador.h
	$(CC) Tratador.cpp -c 

Anfibio.o: Animal.o Anfibio.cpp Anfibio.h
	$(CC) Anfibio.cpp -c

Mamifero.o: Animal.o Mamifero.cpp Mamifero.h
	$(CC) Mamifero.cpp -c

Reptil.o: Animal.o Reptil.cpp Reptil.h
	$(CC) Reptil.cpp -c

Main: Main.cpp $(OBJS)
	$(CC) $(OBJS) Main.cpp -o $(PROG)

clear:
	rm *.o
	rm $(PROG)