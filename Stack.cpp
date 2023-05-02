#include <iostream>
#include "Stack.h"
#include "Node.h"

Stack::Stack() {
  Node *head = nullptr;
}

int Stack::push(int d) {
  Node *tmp = new Node(d);
  tmp->setNext(head);
  head = tmp;
  return d;
}

int Stack::pop() {
  int data = head->getData();
  head =  head->getNext();
  return data;
}

int Stack::top() {
  return head->getData();
}

bool Stack::is_empty() {
  if (head == nullptr) {
    return true;
  }
  return false;
}
