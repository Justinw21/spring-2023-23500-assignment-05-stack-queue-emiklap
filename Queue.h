/**
 * 1. Constructor(s)
2. enqueue(int) (you can change to std::string if you wish) // add an item to the back of the queue
3. int dequeue() // remove and return the item from the front of the queue
4. int front() // return but do not remove the item from the front of the queue
5. bool is_empty()
6. bool is_full().
*/

#pragma once
#include <vector>
#include "Node.h"

class Queue {
private:
  int q[10];
  int head;
  int tail;

public:
  Queue();
  Queue(int);
  void enqueue(int);
  int dequeue();
  int front();
  bool is_empty();
  bool is_full();
};
