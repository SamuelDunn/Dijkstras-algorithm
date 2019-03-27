/*
 This struct implements a graph using an adjecency list.
 Each graph struct contains a vector of linked lists. The index of the vector
 corresponds to the label, or name, or a vertex in the graph. The linked list
 located at index i provides a full list of all edges indicent on vertex i.
 Further, each node of each linked list contains an ordered triple which gives
 (source node, target node, edge weight). This struct can be used to represent
 a directed or an undirected graph. For undirected graphs for an edge that does
 from vertex i to vertex j simply provide both the following triples (i, j, weight)
 and (j, i, weight) in the file that is used to create the graph.

 Functions:

 Graph(int vertices, std::string fileName);
 vertices gives the number of vertices in the graph. fileName provides the
 name of the file that contains the information that will be used to create the
 graph. The file should be a .txt file and should have three columns of numbers
 separated by a single space. The first column provides the label of the source
 vertex (which must be a value in the range [0, |V| - 1] for the edge set V.
 The second column is the label of source vertex which is in the same range.
 The third column is the weight of the edge between the target and source vertices.
 This weight must be >= 0 in order for Dijkstra's algorithm to work.

 void print();
 prints the adjecency list of the graph.

 void clear();
 clears the adjecency list of the graph deleting all information about vertices
 and edges.

 size_t size();
 Gives the size if the vertex set if the graph. 
 */

#include <vector>
#include <string>
#include <list>
#include <tuple>
#include <set>

#ifndef Graph_hpp
#define Graph_hpp

struct Graph {
   std::vector<std::list<std::tuple<int, int, int>>> adjList;
   // Takes a vertex set and an edge set to construct the graph
   Graph(int vertices, std::string fileName);
   void print();
   void clear();
   size_t size();
};




#endif /* Graph_hpp */
