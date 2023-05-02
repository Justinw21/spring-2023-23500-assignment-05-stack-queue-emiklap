/* 1. Constructor/destructors
2. push(int) (you can change the type to std::string if you'd like)
3. int pop() // remove and return the top item
4. int top() // return but do not remove the top item
5. bool is_empty() // return true if empty, false otherwise
*/

#pragma once
#include "Node.h"


class Stack {
private:
  Node *head;
public:
  Stack();
  int push(int);
  int pop();
  int top();
  bool is_empty();
};
