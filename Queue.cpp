#include <iostream>
#include <vector>
#include "Queue.h"

/*
 * The head/front will be the first spot of the array (index 0).
 * The tail/back will be where the next avaliabe space is.
 * I had the tail variable move and the head be stationary.
 * The tail wraps around (using mod) when it surpasses the size limit of the queue (this is how we know it filled up).
 * The this demo queue works for a small sample size of 10 spots.
 *
 */

Queue::Queue() {
  int q[10];
  int head = 0;
  int tail = 0;
}

void Queue::enqueue(int data) {
  if (tail >= 10) {
    int counter = tail % 10;
    q[counter] = data;
  } else {
    q[tail] = data;
  }
  tail++;
}

int Queue::dequeue() {
  int temp = q[0];
  for (int i = 0; i < 10-1; i++) {
    q[i] =  q[i+1];
  }
  tail--;
  q[10] = 0;
  return temp;
}

int Queue::front() {
  return q[head];
}

bool Queue::is_empty() {
  if (tail == head) {
    return true;
  }
  return false;
}
bool Queue::is_full() {
 if (tail >= 10) {
   return true;
 }
 return false;
}
