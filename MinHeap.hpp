#ifndef MinHeap_hpp
#define MinHeap_hpp

#include <vector>
#include <string>


class MinHeap {
private:
   class Node {
   protected:
      int value; // This value is the graph vertices name
      int key; // This will be the distance to reach the vertex whose name is value
      int size;
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

   std::vector<Node> nodes;
   //void heapBuild(int* array, int size);
public:
   //MinHeap(int* array, int size);
   MinHeap();

   int parentIndex(int index);
   int leftChildIndex(int index);
   int rightChildIndex(int index);

   void insert(int key, int value);
   Node deleteMin();
   void percolateUp(int index);
   void percolateDown(int index);
   //void increaseKey(int index, int amount);
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
