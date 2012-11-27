CPP = g++
FLAGS = -Wall -Wextra -Werror

HashTable.o: HashTable.cpp HashTable.h
	$(CPP) -c $< 

Entry.o: Entry.cpp Entry.h
	$(CPP) -c $< $(FLAGS)
