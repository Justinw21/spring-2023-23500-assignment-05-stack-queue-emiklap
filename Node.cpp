#include <iostream>
#include "Node.h"

Node::Node() {
  data = 0;
  next = nullptr;
}

Node::Node(int data) {
  this->data = data;
  next = nullptr;
}


Node::Node(int data, Node *n) {
  this->data = data;
  next = n;

}

int Node::getData() {
  return data;
}

Node * Node::getNext() {
  return next;
}

void Node::setData(int data) {
  this->data = data;
}

void Node::setNext(Node *n) {
  next = n;
}
