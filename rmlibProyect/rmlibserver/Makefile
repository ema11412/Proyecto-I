output:  main.o Server.o
	g++ main.o Server.o -o output

main.o: main.cpp
	g++ -c main.cpp

Server.o: server/Server.cpp server/Server.h
	g++ -c server/Server.cpp -std=c++0x -lpthread

clean: 
	rm *.o output


