/*
 Declarations for the member functions of the Graph struct. See Graph.hpp for
 more information
 */

#include "Graph.hpp"
#include <iostream>
#include "Helpers.hpp"




Graph::Graph(int vertices, std::string fileName) {

   std::vector<std::tuple<int, int, int>> edges;
   loadGraph(fileName, edges);

   for(int i = 0; i < vertices; i ++) {
      adjList.push_back(std::list<std::tuple<int, int, int>>());
   }

   std::vector<std::tuple<int ,int, int>>::iterator it;

   for(it = edges.begin(); it != edges.end(); it ++) {
      adjList[std::get<0>(*it)].push_back(*it);
   }
}




void Graph::print() {
   std::vector<std::list<std::tuple<int, int, int>>>::iterator vecIt;
   std::list<std::tuple<int, int, int>>::iterator listIt;

   for(vecIt = adjList.begin(); vecIt != adjList.end(); vecIt ++) {
      std::cout << std::distance(adjList.begin(), vecIt) << " : ";
      for(listIt = vecIt->begin(); listIt != vecIt->end(); listIt ++ ){
         std::cout << "(" << std::get<0>(*listIt) << ", " << std::get<1>(*listIt)
                   << ", " << std::get<2>(*listIt) << ")";
         std::list<std::tuple<int, int, int>>::iterator nextElement = listIt;
         nextElement++;
         if(nextElement != vecIt->end()) {
            std::cout << ", ";
         }
      }
      std::cout << std::endl;
   }

}




void Graph::clear() {
   adjList.clear();
}




size_t Graph::size() {
   return adjList.size();

}




