# lab3
# Qa
	g++ -o Qa Qa.cpp
# Qb
	g++ -c clock.cpp
	g++ -c Qb.cpp
	g++ -o Qb Qb.o clock.o

size=1000
sort():0.000205 seconds
insert_sort():0.017318 seconds

size:10000
sort():0.002681 seconds
insert_sort():1.6654 seconds

size:100000
sort():0.034272 seconds

size:1000000
sort():0.377931 seconds
