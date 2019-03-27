/*
 This is the file that contains the function definition that implements
 Dijkstra's algorithm. This is the function that is called to run the
 algorithm.

 void dijkstra(Graph graph, int startNode, int endNode);
 This function takes a Graph struct (see Graph.hpp for more info) that holds
 the graph that the algorithm will operate on.
 startNode is the value corresponding to the label of the source vertex. This value
 must be in the range [0, |V| - 1] for the graph vertex set V.
 endNode is the value corresponding to the label of the target vertex. This value
 must be in the same range of the value for the source vertex.

 As an output this function prints the shortest path (in terms of edge weight)
 from the source vertex to the target vertex along with the value of the sum of
 the edges along the path.

*/

#ifndef Dijkstra_h
#define Dijkstra_h

#include "Graph.hpp"
#include <string>

void dijkstra(Graph graph, int startNode, int endNode);

class DijkstraException {
private:
   std::string message;
public:
   DijkstraException(std::string message);
   std::string getMessage();
};

#endif /* Dijkstra_h */
