Qb:Qb.o clock.o
	g++ -o Qb Qb.o clock.o
clock.o:clock.cpp clock.h
	g++ -c clock.cpp
Qb.o:Qb.cpp
	g++ -c Qb.cpp
