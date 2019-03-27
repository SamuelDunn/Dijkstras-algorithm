/*
This file contains the definitions for the MinHeap class and the Node class.

 Node class:
 The minheap contains Nodes which hold information about graph vertices and
 edges.

 Node data members:

 - int value: This value is the label for a graph vertex
 - int key: Key holds the value of the the distance from the source vertex to the
 vertex whose label is equal to value. This is the value that the minheap
 operates on.

 Node member functions:

 Node(int key, int value)
 Creates a node to be stored in the minheap and sets the key and value
 datamembers.

 int getValue()
 returns the value of key.



 MinHeap class:
 This class implements a standard complete tree binary minheap that operates on
 the key datamember of the Node class.

 MinHeap data members:

 - int size: gives the nubmer of nodes in the minheap at any time.

 - std::vector<Node> nodes : a vector that contains the nodes that make up the
  binary minheap tree.

 MinHeap member functions:

 MinHeap();
 creates an empty minheap.

 int parentIndex(int index);
 Provides the position in the nodes vector of the parent of the node labeled
 "index".

 int leftChildIndex(int index);
 Provides the position in the nodes vector of the left child of the node labeled
 "index".

 int rightChildIndex(int index);
 Provides the position in the nodes vector of the right child of the node labeled
 "index".

 void insert(int key, int value);
 inserts a node into the minheap that holds the data members key and value.

 Node deleteMin();
 Returns the node with the minimum key value and deletes it from the minheap.

 void percolateUp(int index);
 Moves a node that possibly has a smaller key than its parent's key up in the
 minheap tree to its proper position.

 void percolateDown(int index);
 Moves a node that possibly has a larger key than one or both of its children's
 keys down in the minheap tree to its proper position.

 void decreaseKey(int key, int value);
 This function is not implemented as it usually would be for a minheap which is
 to decrease the key value of a node and then call percolateUp(). Instead, for
 the sake of making dijkstra's algorithm cleaner ths function does the exact same
 thing as the insert() function. It is up to the user to ensure that a node that
 has been returned using the deleteMin() function hasn't already been processed
 because there may be nodes with the same value for the value data member but
 with different values for the key data members.

 void print();
 prints the list of nodes and their data members that make up the minheap tree.

 int getSize();
 returns the size of the nodes vector.



 Class MinHeapException
 This class is used to throw an exception if deleteMin() is called on an empty
 minheap.

 MinHeapException data members:
 - std::string message: Allows the user to write a custom message that can be
 retreived with the getMessage() function whenever this exception is caught.

 MinHeapException member functions:

 MinHeapException(std::string message);
 Constructor for the exception that takes a custom message.

 std::string getMessage();
 Returns the message that is stored in the exception object.
*/



#ifndef MinHeap_hpp
#define MinHeap_hpp

#include <vector>
#include <string>


class MinHeap {
private:

   class Node {
   protected:
      int value;
      int key;
   public:
      Node(int key, int value) {
         this->key = key;
         this->value = value;
      }
      int getValue() {
         return value;
      }
      friend class MinHeap;
   };

   int size;
   std::vector<Node> nodes;

public:
   MinHeap();

   int parentIndex(int index);
   int leftChildIndex(int index);
   int rightChildIndex(int index);

   void insert(int key, int value);
   Node deleteMin();
   void percolateUp(int index);
   void percolateDown(int index);
   void decreaseKey(int key, int value);

   void print();
   int getSize();

   class MinHeapException{
   private:
      std::string message;
   public:
      MinHeapException(std::string message) {
         this->message = message;
      }
      std::string getMessage() {
         return this->message;
      }
   };
};

#endif /* min-heap_hpp */

