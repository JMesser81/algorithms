# C gcc -pipe -O2 -std=c11 <filename> -lm

# C++ g++ -pipe -O2 -std=c++11 <filename> -lm

CC=g++
CFLAGS=-c --std=c++11 -g

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ $<

testsort-insertion: driver.o insertion_sort/insertionsort.o
	g++ -g -o testsort driver.o insertion_sort/insertionsort.o

testsort-selection: driver.o selection_sort/selectionsort.o
	g++ -g -o testsort driver.o selection_sort/selectionsort.o

testsort-bubble: driver.o bubble_sort/bubblesort.o
	g++ -g -o testsort driver.o bubble_sort/bubblesort.o

clean:
	rm -f testsort driver.o \
		  selection_sort/*.o \
		  insertion_sort/*.o \
		  bubble_sort/bubblesort.o \
		  *~ core
