all: output

output: main.o Dijkstra.o Graph.o MinHeap.o Helpers.o
	g++ main.o Dijkstra.o Graph.o MinHeap.o Helpers.o -o mainExe

main.o: main.cpp
	g++ -c -std=c++11 main.cpp

Dijkstra.o: Dijkstra.cpp
	g++ -c -std=c++11 Dijkstra.cpp

Graph.o: Graph.cpp
	g++ -c -std=c++11 Graph.cpp

Helpers.o: Helpers.cpp
	g++ -c -std=c++11 Helpers.cpp

MinHeap.o: MinHeap.cpp
	g++ -c -std=c++11 MinHeap.cpp

clean:
	rm *.o mainExe
