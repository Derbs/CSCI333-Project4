CPP = g++
FLAGS = -Wall -Wextra -Werror

test: hash_test.cpp HashTable.o Entry.o
	$(CPP) -o $@ $^ $(FLAGS)

HashTable.o: HashTable.cpp HashTable.h
	$(CPP) -c $< 

Entry.o: Entry.cpp Entry.h
	$(CPP) -c $< $(FLAGS)

clean:
	rm -f *.o
	rm -f test
