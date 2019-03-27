/*
 
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
