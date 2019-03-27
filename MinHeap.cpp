/*
This file contains the function declarations for the MinHeap class. See
MinHeap.hpp for more information
 */


#include "MinHeap.hpp"
#include <iostream>




MinHeap::MinHeap() {
}




int MinHeap::parentIndex(int index) {
   return (index - 1)/2;
}




int MinHeap::leftChildIndex(int index) {
   return index * 2 + 1;
}




int MinHeap::rightChildIndex(int index) {
   return index * 2 + 2;
}




void MinHeap::percolateUp(int index) {
   if(index < 0 || index > nodes.size() - 1) {
      return;
   }
   int currentIndex = index;
   while (parentIndex(currentIndex) >= 0 &&
          nodes[currentIndex].key < nodes[parentIndex(currentIndex)].key) {
      std::swap(nodes[currentIndex], nodes[parentIndex(currentIndex)]);
      currentIndex = parentIndex(currentIndex);
   }
}




void MinHeap::percolateDown(int index) {
   if(index < 0 || index > nodes.size() - 1) {
      return;
   }
   int currentIndex = index;
   int min;

   if(rightChildIndex(currentIndex) < nodes.size()) {
      // If the right child is in range so is the left child since the
      // heap is a complete tree
      if(nodes[rightChildIndex(currentIndex)].key <
         nodes[leftChildIndex(currentIndex)].key) {
         min = rightChildIndex(currentIndex);
      } else {
         min = leftChildIndex(currentIndex);
      }
   } else if (leftChildIndex(currentIndex) < nodes.size()){
      min = leftChildIndex(currentIndex);
   } else {
      // Neither child is in range.
      return;
   }

   while(min < nodes.size() && nodes[min].key < nodes[currentIndex].key) {
      std::swap(nodes[min], nodes[currentIndex]);

      currentIndex = min;

      if(rightChildIndex(currentIndex) < nodes.size()) {
         // If the right child is in range so is the left child since the
         // heap is a complete tree
         if(nodes[rightChildIndex(currentIndex)].key <
            nodes[leftChildIndex(currentIndex)].key) {
            min = rightChildIndex(currentIndex);
         } else {
            min = leftChildIndex(currentIndex);
         }
      } else if (leftChildIndex(currentIndex) < nodes.size()){
         min = leftChildIndex(currentIndex);
      } else {
         // Neither child is in range.
         return;
      }
   }
}




void MinHeap::insert(int key, int value) {
   nodes.push_back(Node(key, value));
   percolateUp(static_cast<int>(nodes.size()) - 1);
}




MinHeap::Node MinHeap::deleteMin() {
   if(!(nodes.size() > 0)) {
      throw MinHeapException("Deletion is not allowed on empty heap.");
   }
   Node min = nodes[0];
   nodes[0] = nodes.back();
   nodes.pop_back();
   percolateDown(0);
   return min;
}




void MinHeap::decreaseKey(int key, int value) {
   nodes.push_back(Node(key, value));
   percolateUp(static_cast<int>(nodes.size()) - 1);
}




void MinHeap::print() {
   for(int i = 0; i < nodes.size(); i ++) {
      std::cout << "key: " << nodes[i].key << " value: " << nodes[i].value << std::endl;
   }
}




int MinHeap::getSize() {
   return static_cast<int>(nodes.size());
}







