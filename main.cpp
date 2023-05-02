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

  return 0;
}
