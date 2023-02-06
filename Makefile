CC = gcc
APP = run
all: main.cpp getMax.o
	$(CC) -o $(APP) main.cpp getMax.o

getMax.o: getMax.cpp getMax.hpp
	$(CC) -c getMax.cpp

clean:
	rm *.o $(APP)
