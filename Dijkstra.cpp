// Djikstra's Algorithm

#include "Dijkstra.hpp"
#include <iostream>
#include <vector>
#include "Constants.hpp"
#include "MinHeap.hpp"
#include <list>
#include <tuple>

void dijkstra(Graph graph, int startNode, int endNode) {

   // Check that startNode and endNode are in the correct range.
   // throw an error otherwise.

   std::vector<bool> visited;
   std::vector<int> prevNode;
   std::vector<int> distance;
   int numVisited = 0;
   MinHeap heap = MinHeap();

   prevNode.reserve(graph.adjList.size());
   for(int i = 0; i < graph.adjList.size(); i ++) {
      visited.push_back(false);
      distance.push_back(INF);
      prevNode.push_back(startNode);
   }

   // Start the algorithm
   int currentNode = startNode;

   distance[startNode] = 0;
   visited[startNode] = true;
   numVisited ++;
   prevNode[currentNode] = currentNode; // This can be a check for us when we're
   // retracing our steps to get the path.


   while(numVisited < graph.adjList.size()) {

      std::list<std::tuple<int, int, int>>::iterator it;

      for(it = graph.adjList[currentNode].begin(); it != graph.adjList[currentNode].end(); it ++) {

         //std::cout << std::get<0>(*it) << std::get<1>(*it) <<std::get<2>(*it) << std::endl;

         int nodeToUpdate = std::get<1>(*it);
         int pathDist = std::get<2>(*it);
         if(visited[nodeToUpdate] == false) {
            if(distance[currentNode] + pathDist < distance[nodeToUpdate]) {
               distance[nodeToUpdate] = distance[currentNode] + pathDist;
               // For ease we'll just insert into the heap insead of calling decreaseKey()
               // since both functions do the same thing in this implementation.
               heap.insert(distance[nodeToUpdate], nodeToUpdate);
               prevNode[nodeToUpdate] = currentNode;
            }
         }
      }

      // In the event that there isn't a path from the start node to some other
      // node(s) the heap will run out of elements to process before all nodes
      // have been discovered.
      if(heap.getSize() <= 0)
         break;

      // Find the next node to go to and update
      currentNode = heap.deleteMin().getValue();
      while(visited[currentNode] == true && static_cast<int>(heap.getSize()) > 0) {
         currentNode = heap.deleteMin().getValue();
      }
      visited[currentNode] = true;
      numVisited ++;


   } // end while

   // Report shortest paths from startNode to all nodes in the graph. For large
   // graphs reporting all shortest paths clutters the output. Instead of
   // reporting all paths the code below this comment reports only the shortest
   // path from startNode to endNode
//   for(int i = 0; i < graph.adjList.size(); i ++) {
//      if(visited[i]) {
//         std::cout << "The shortest path from " << startNode << " to " << i
//         << " is ";
//
//         int node = i;
//         std::vector<int> path = std::vector<int>();
//         path.push_back(node);
//         while(node != prevNode[node]) {
//            path.push_back(prevNode[node]);
//            node = prevNode[node];
//         }
//         for(int i = static_cast<int>(path.size()) - 1; i >= 0; i --) {
//            std::cout << path[i];
//            if(i > 0)
//               std::cout << "-";
//         }
//         std::cout << " of weight " << distance[i] << std::endl;
//      } else {
//         std::cout << "There is no path from vertex " << startNode << " to vertex "
//         << i << std::endl;
//      }
//   }

   // Report the shortest path from startNode to endNode
   if(visited[endNode]) {
      std::cout << "The shortest path from " << startNode << " to " << endNode
      << " is ";
      int node = endNode;
      std::vector<int> path = std::vector<int>();
      path.push_back(node);
      while(node != prevNode[node]) {
         path.push_back(prevNode[node]);
         node = prevNode[node];
      }
      for(int i = static_cast<int>(path.size()) - 1; i >= 0; i --) {
         std::cout << path[i];
         if(i > 0)
            std::cout << "-";
      }
      std::cout << " of weight " << distance[endNode] << std::endl;
   } else {
      std::cout << "There is no path from vertex " << startNode << " to vertex "
      << endNode << std::endl;
   }

}



