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



//   cout << endl << endl << endl;
//
//
//   MinHeap myHeap = MinHeap();
//   myHeap.insert(3, 5);
//   myHeap.insert(2, 109);
//   myHeap.insert(12, 4);
//   myHeap.insert(1, 6);
//   myHeap.insert(3, 6);
//   myHeap.insert(8, 6);

//   myHeap.print();




//   srand(static_cast<int>(time(0)));
//   priority_queue<int,vector<int>,greater<int> > q;
//   for( int i = 0; i != 10; ++i ) q.push(rand()%10);
//   cout << "Min-heap, popped one by one: ";
//   while( ! q.empty() ) {
//      cout << q.top() << ' ';
//      q.pop();
//   }
//   cout << endl;
//
//   // Testhing list:
//   list<int> myList = list<int>();
//   myList.push_front(3);
//   myList.push_front(4);
//   myList.push_front(43);
//
//   list<int>::iterator it;
//   for(it = myList.begin(); it != myList.end(); it++ ){
//      cout << *it << endl;
//   }
//
//   tuple<int, int, int> myTup = tuple<int, int, int>(1, 3, 444);
//   cout << get<2>(myTup) << endl;
//
//
//
//   vector<int> myVec = vector<int>();
//   myVec.reserve(10);
//   myVec[9] = 234;
//   cout << myVec[9] << endl;
//   cout << myVec.capacity() << endl;
//
//   std::vector<std::tuple<int ,int>>::iterator it;
//
//   for(it = edges.begin(); it != edges.end(); it ++) {
//      cout << std::get<0>(*it) << ", " << std::get<1>(*it) << endl;
//   }


// Test graph
//   edges.push_back(tuple<int, int, int>(0, 1, 2));
//   edges.push_back(tuple<int, int, int>(0, 2, 10));
//   edges.push_back(tuple<int, int, int>(0, 3, 4));
//   edges.push_back(tuple<int, int, int>(1, 2, 12));
//   edges.push_back(tuple<int, int, int>(2, 1, 9));
//   edges.push_back(tuple<int, int, int>(3, 0, 7));
//   edges.push_back(tuple<int, int, int>(3, 2, 1));



// Test graph number 2 //////
//vector<tuple<int, int, int>> edges = vector<tuple<int, int, int>>();
//
//edges.push_back(tuple<int, int, int>(0, 1, 2));
//edges.push_back(tuple<int, int, int>(0, 3, 1));
//edges.push_back(tuple<int, int, int>(1, 3, 3));
//edges.push_back(tuple<int, int, int>(1, 4, 10));
//edges.push_back(tuple<int, int, int>(2, 0, 4));
//edges.push_back(tuple<int, int, int>(2, 5, 5));
//edges.push_back(tuple<int, int, int>(3, 2, 2));
//edges.push_back(tuple<int, int, int>(3, 4, 2));
//edges.push_back(tuple<int, int, int>(3, 5, 8));
//edges.push_back(tuple<int, int, int>(3, 6, 4));
//edges.push_back(tuple<int, int, int>(4, 6, 6));
//edges.push_back(tuple<int, int, int>(6, 5, 1));
//
//
//Graph myGraph = Graph(7, edges);
////myGraph.print();
//
//dijkstra(myGraph, 4, 3);
