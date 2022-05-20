CC = g++

all:
	${CC} -o main .\main.cpp .\safeint.cpp

clean:
	rm -rvf *.o *.exe