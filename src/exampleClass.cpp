#include "exampleClass.hpp"
#include <iostream>

Example::Example() : member(0) {}

Example::Example(int member) : member(member) {}

Example::Example(const Example &other) : member(other.member) {}

void Example::printMember() const {
  std::cout << "member: " << member << std::endl;
}

void Example::increaseMember() {
  member += 1;
}

int Example::returnMember() const {
  return member;
}
