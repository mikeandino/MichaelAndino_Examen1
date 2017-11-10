run:	main.o General.o Marine.o Pieza.o
	g++ main.o General.o Marine.o Pieza.o -o run

main.o:	main.cpp General.h Marine.h Pieza.h
	g++ -c main.cpp

General.o:	General.cpp General.h Pieza.h
	g++ -c General.cpp

Marine.o:	Marine.cpp Marine.h Pieza.h
		g++ -c Marine.cpp

Pieza.o: Pieza.cpp Pieza.h
	g++ -c Pieza.cpp

clean:
	rm *.o run
