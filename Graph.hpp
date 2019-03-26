// A graph represented using an adjecency list.

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
