#include <iostream>
#include "Stack.h"
#include "Queue.h"

int main()
{
  Stack *example1 = new Stack();
  std::cout << example1->is_empty() << "\n";
  try {
    std::cout << example1->top() << "\n";
  } catch (int e) {
     std::cout << "handling the exception here : " << e << "\n";
  }

  std::cout << example1->push(10) << "\n";
  std::cout << example1->push(20) << "\n";
  std::cout << example1->push(30) << "\n";
  std::cout << example1->pop() << "\n";
  std::cout << example1->top() << "\n";
  delete example1;
  std::cout << example1->top() << "\n";

  return 0;
}
