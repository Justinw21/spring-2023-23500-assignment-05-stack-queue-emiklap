#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Node.h"
#include "Stack.h"
#include "Queue.h"

Stack *s1 = new Stack();
Stack *s2 = new Stack();

TEST_CASE("STACK CLASS: push(int) and top()") {
  CHECK(s1->push(10) == 10);
  CHECK(s2->push(135) == 135);
  CHECK(s2->push(235) == 235);
  CHECK(s2->push(335) == 335);
  CHECK(s1->top() == 10);
  CHECK(s1->push(11) == 11);
  CHECK(s1->top() != 10);
  CHECK(s2->top() != 10);
}

TEST_CASE("STACK CLASS: pop() and top() ") {
  CHECK(s2->pop() == 335);
  CHECK(s2->top() == 235);
  CHECK(s1->pop() == 11);
  CHECK(s1->top() != 235);
}



Queue *q1 = new Queue(); //will be empty
Queue *q2 = new Queue(); //will be half full
Queue *q3 = new Queue(); //will be full


TEST_CASE("QUEUE CLASS : enqueue(), is_empty(), is_full()") {
  int i = 0;
  while ( i < 10 ) {
    if (i % 2 == 0) {
      q2->enqueue(i);
    }
    q3->enqueue(i);
    i++;
  }

  CHECK(q1->is_empty() == true);
  CHECK(q1->is_full() == false);
  CHECK(q2->is_empty() == false);
  CHECK(q2->is_full() == false);
  CHECK(q3->is_empty() == false);
  CHECK(q3->is_full() == true);
}

TEST_CASE("QUEUE CLASS : front(), dequeue(), is_full()") {
  CHECK(q3->front() == 0);
  CHECK(q3->dequeue() == 0);
  CHECK(q3->front() == 1);
  CHECK(q3->is_full() == false); //should no longer be full bc we removed one item
}


