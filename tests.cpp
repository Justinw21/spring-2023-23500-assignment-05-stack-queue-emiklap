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

TEST_CASE("STACK CLASS: ") {

}


