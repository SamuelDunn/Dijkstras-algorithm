/*
 This is the client program used to test the dijkstra() function which implements
 Dijkstra's shortest path algorithm.
 The function has the following signature:

 void dijkstra(Graph graph, int startNode, int endNode);

 The second and third parameters (startNode and endNode) indicate the source
 and target vertices. Each of these values must be in the correct
 range which is [0, |V|] where |V| is the size of the vertex set. The value of
 |V| for each of the test graphs is proveded below in main().
 The first argument of the function must be a Graph struct (see Graph.hpp for
 more information).

 To test the algorithm in different situations provide the dijkstra() function
 different source and target vertices and run the program to see the results.
 */

#include <iostream>
#include <tuple>
#include <vector>
#include "Graph.hpp"
#include "Dijkstra.hpp"
#include "Constants.hpp"
#include "Helpers.hpp"

using namespace std;

int main(int argc, char* argv[])
{
   // 1900 nodes (labeled 0 to 1899)
   Graph graph = Graph(1900, "input/UCI-social-network.txt");
   dijkstra(graph, 1852, 6);


   // 6006 nodes (labeled from 0 to 6005)
   graph = Graph(6006, "input/soc-sign-bitcoinotc-clean.txt");
   dijkstra(graph, 1023, 3);


   // 7605 nodes (labeled from 0 to 7604)
   graph = Graph(7605, "input/soc-sign-bitcoinalpha-clean.txt");
   dijkstra(graph, 402, 3021);


   // 1971281 nodes (labeled from 0 to 1971280)
   graph = Graph(1971281, "input/roadNet-CA-clean.txt");
   dijkstra(graph, 273270, 1179740);


   return 0;
}


