#include <iostream>
#include "Stack.h"
#include "Queue.h"

int main()
{
  Stack *example1 = new Stack();
  std::cout << "example1->is_empty(): " << example1->is_empty() << "\n";
  try {
    std::cout << "trying 'example1->top()' on empty stack\n   "<< example1->top() << "\n";
  } catch (int e) {
     std::cout << "handling the exception here : " << e << "\n";
  }

  std::cout << "example1->push(10): "<< example1->push(10) << "\n";
  std::cout << "example1->push(20): " <<  example1->push(20) << "\n";
  std::cout << "example1->pop(): " << example1->pop() << "\n";
  std::cout << "example1->top(): " << example1->top() << "\n";
  std::cout << "example1->is_empty(): " << example1->is_empty() << "\n";
  delete example1;

  std::cout << "\n--------------\n\n";

  Queue *example2 = new Queue();
  std::cout << "example2->is_empty() : " << example2->is_empty() << "\n";
  std::cout << "example2->is_full() : " << example2->is_full() << "\n";

  example2->enqueue(1);
  example2->enqueue(2);
  example2->enqueue(3);
  example2->enqueue(4);
  example2->enqueue(5);
  example2->enqueue(6);
  example2->enqueue(7);
  example2->enqueue(8);
  example2->enqueue(9);
  example2->enqueue(10);
  std::cout << "filled up the queue" << "\n";

  std::cout <<  example2->dequeue() << "\n"; //dequeue the "1"
  std::cout <<  example2->front() << "\n";
  example2->enqueue(11);
  example2->enqueue(12); // wraps around, this is in the head spot now
  std::cout  << "example2->front() : "<<  example2->front() << "\n";
  std::cout << "example2->is_empty() : " << example2->is_empty() << "\n";
  std::cout << "example2->is_full() : " << example2->is_full() << "\n";

  return 0;
}
