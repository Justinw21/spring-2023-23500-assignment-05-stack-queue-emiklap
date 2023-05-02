#include <iostream>
#include "Stack.h"
#include "Node.h"

#define ERROR_EMPTY_STACK 120
#define ERROR_FULL_STACK 130

//the head node is the item at the very top of the stack
Stack::Stack() {
  Node *head = nullptr;
}

Stack::~Stack() {
  std::cerr << "Calling the destructor \n";
  Node *walker, *trailer;
  walker = this->head;
  trailer = nullptr;

  while(walker != nullptr){
    trailer=walker;
    walker = walker->getNext();
    delete trailer;
  }
}
//see if stack is full, not sure how to actually impliment this
/*
  * if (we cannot add another node to the stack) {
  *  throw ERROR_FULL_STACK;
  * } else {
  *  do what is in the function
  * }
  *
  */
int Stack::push(int d) {
  Node *tmp = new Node(d);
  tmp->setNext(head);
  head = tmp;
  return d;
}

int Stack::pop() {
  //see if the stack is empty
  if (head == nullptr) {
    throw ERROR_EMPTY_STACK;
  } else {
    int data = head->getData();
    head = head->getNext();
    return data;
  }
}

int Stack::top() {
  //see if stack is empty
  if (head == nullptr) {
    throw ERROR_EMPTY_STACK;
  } else {
    return head->getData();
  }
}

bool Stack::is_empty() {
  if (head == nullptr) {
    return true;
  }
  return false;
}
